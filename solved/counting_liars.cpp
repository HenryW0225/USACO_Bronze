#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int ans = 1000;
    cin >> N;
    int coordinates[1000];
    char directions[1000];
    for (int i = 0; i < N; i++) {
        cin >> directions[i] >> coordinates[i];
    } for (int i = 0; i < N; i++) {
        int count1 = 0;
        for (int j = 0; j < N; j++) {
            if (coordinates[j] < coordinates[i] and directions[j] == 'L') {
                count1++;
            } else if (coordinates[j] > coordinates[i] and directions[j] == 'G') {
                count1++;
            }
        } ans = min(ans, count1);
    } cout << ans;
}
