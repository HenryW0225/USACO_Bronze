#include <iostream>
#include <array>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream cin ("balancing.in");
    ofstream cout ("balancing.out");
    int N, ans = 100;
    long long B, coordinates[100][2];
    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        cin >> coordinates[i][0] >> coordinates[i][1];
    } for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int a = coordinates[i][0] + 1;
            int b = coordinates[j][1] + 1;
            int sum[4] = {0, 0, 0, 0};
            for (int k = 0; k < N; k++) {
                if (coordinates[k][0] < a and coordinates[k][1] < b) {
                    sum[0] += 1;
                } else if (coordinates[k][0] > a and coordinates[k][1] < b) {
                    sum[1] += 1;
                } else if (coordinates[k][0] < a and coordinates[k][1] > b) {
                    sum[2] += 1;
                } else {
                    sum[3] += 1;
                }
            } auto index = max_element(sum, sum+4);
            ans = min(ans, *index);
        }
    } cout << ans;
}
