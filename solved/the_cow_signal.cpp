#include <iostream>
#include <array>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    char m[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> m[i][j];
        }
    } for (int a = 0; a < N; a++) {
        string s;
        for (int b = 0; b < M; b++) {
            for (int c = 0; c < K; c++) {
                s.push_back(m[a][b]);
            }
        } for (int d = 0; d < K; d++) {
            cout << s << endl;
        }
    }
}

