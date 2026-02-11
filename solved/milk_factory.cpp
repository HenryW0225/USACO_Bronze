#include <iostream>
#include <vector>
#include <array>
#include <cstring>
#include <fstream>
using namespace std;

int N;
int points[100];

void floodfill(int index, vector<vector<int>> connections) {
    points[index] = 1;
    for (int i = 0; i < connections[index].size(); i++) {
        floodfill(connections[index][i], connections);
        //if (points[connections[index][i]] == 0) {
           //floodfill(connections[index][i], connections);
        //}
    } 
}

bool check() {
    for (int j = 0; j < N; j++) {
        if (points[j] == 0) {
            return false;
        }
    } return true;
}

int main() {
    ifstream cin ("factory.in");
    ofstream cout("factory.out");
    int x = 0, y = 0;
    int ans = -1;
    cin >> N;
    vector<vector<int>> connections(N);
    for (int i = 0; i < N-1; i++) {
        cin >> x >> y;
        x -= 1;
        y -= 1;
        connections[y].push_back(x);
    } 
    for (int i = 0; i < N; i++) {
        memset(points, 0, 100);
        floodfill(i, connections);
        if (check() == true) {
            ans = i+1;
            i = N;
        }
    } cout << ans;
}
