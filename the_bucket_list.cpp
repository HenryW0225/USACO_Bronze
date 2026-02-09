#include <iostream>
#include <array>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cows[N][3];
    int maxtime = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> cows[i][j];
            if (j == 1 and cows[i][j] > maxtime) {
                maxtime = cows[i][j];
            }
        }
    } int values[maxtime];
    for (int i = 0; i < maxtime; i++) {
        values[i] = 0;
    } for (int i = 0; i < N; i++) {
        for (int j = cows[i][0]-1; j < cows[i][1]; j++) {
            values[j] += cows[i][2];
        }
    } int maxvalue = 0;
    for (int i = 0; i < maxtime; i++) {
        if (maxvalue < values[i]) {
            maxvalue = values[i];
        }
    } cout << maxvalue;
}

