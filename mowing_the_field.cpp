#include <iostream>
#include <array>
#include <fstream>
using namespace std;

int main() {
    ifstream cin ("mowing.in");
    ofstream cout ("mowing.out");
    int n;
    int x = 1000, y = 1000, t = 0, ans = 10001;
    char directions[100];
    int movements[100];
    int visited[2001][2001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> directions[i];
        cin >> movements[i];
    } for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            visited[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < movements[i]; j++) {
            if (directions[i] == 'N') {
                x -= 1;
            } else if (directions[i] == 'S') {
                x += 1;
            } else if (directions[i] == 'E') {
                y += 1;
            } else {
                y -= 1;
            } t += 1;
            if (visited[x][y] != 0 or (x == 1000 and y == 1000)) {
                if (t - visited[x][y] < ans) {
                    ans = t - visited[x][y];
                }
            } 
            visited[x][y] = t;
        }
    }
    if (ans == 10001) {
        cout << -1;
    } else {
        cout << ans;
    }
}
