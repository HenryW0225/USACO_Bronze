/*#include <iostream>
#include <vector>
#include <array>
#include <fstream>
using namespace std;


int main() {
    ifstream cin ("revegetate.in");
    ofstream cout("revegetate.out");
    int N, M, x, y;
    cin >> N >> M;
    int temp[4] = {0};
    int ans[N] = {0};
    int favorites[M][2] = {0};
    vector<vector<int>> pastures(N);
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        pastures[x-1].push_back(i);
        pastures[y-1].push_back(i);
    }
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < 4; m++) {
            temp[m] = 0;
        }
        for (int j = 0; j < pastures[i].size(); j++) {
            if (favorites[pastures[i][j]][0] != 0) {
                temp[favorites[pastures[i][j]][0]-1] = 1;
            } 
        } 
        for (int k = 0; k < 4; k++) {
            if (temp[k] == 0) {
                ans[i] = k+1;
                for (int j = 0; j < pastures[i].size(); j++) {
                    if (favorites[pastures[i][j]][0] != 0) {
                        favorites[pastures[i][j]][1] = k+1;
                    } else {
                        favorites[pastures[i][j]][0] = k+1;
                    }
                } break;
            }
        } 
    } for (int i = 0; i < N; i++) {
        cout << ans[i];
    }
}*/
