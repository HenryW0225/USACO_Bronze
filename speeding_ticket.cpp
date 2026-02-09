#include <iostream>
#include <array>
using namespace std;

int main() {
    int N, M, count1, count2, count3;
    cin >> N >> M;
    int road[100];
    int Bessie[100];
    count1 = 0;
    for (int i = 0; i < N; i++) {
        cin >> count2 >> count3;
        for (int a = count1; a < count1 + count2; a++) {
            road[a] = count3;
        } count1 += count2;
    } count1 = 0;
    for (int i = 0; i < M; i++) {
        cin >> count2 >> count3;
        for (int a = count1; a < count1 + count2; a++) {
            Bessie[a] = count3;
        } count1 += count2;
    } int max = 0;
    for (int i = 0; i < 100; i++) {
        if (Bessie[i] - road[i] > max) {
            max = Bessie[i] - road[i];
        }
    } cout << max;
}

