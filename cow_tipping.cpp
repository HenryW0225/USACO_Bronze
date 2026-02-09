#include <iostream>
#include <fstream>
using namespace std;

char grid[10][10];

void change(int i, int j) {
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            if (grid[a][b] == '0') {
                grid[a][b] = '1';
            } else {
                grid[a][b] = '0';
            }
        }
    }
}

int main() {
    ifstream cin ("cowtip.in");
    ofstream cout ("cowtip.out");
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    } 
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (grid[i][j] == '1') {
                change(i+1, j+1);
                ans += 1;
            }
        }
    } cout << ans;
} 
