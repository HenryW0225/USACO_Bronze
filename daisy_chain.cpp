#include <iostream>
#include <array>
using namespace std;

int main() {
    int N, sum, average;
    cin >> N;
    int count1 = N;
    int flowers[N];
    for (int i = 0; i < N; i++) {
        cin >> flowers[i];
    } for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            sum = 0;
            for (int k = i; k < j+1; k++) {
                sum += flowers[k];
            } if (sum%(j-i+1) == 0) {
                average = sum/(j-i+1);
                for (int k = i; k < j+1; k++) {
                    if (flowers[k] == average) {
                        count1++;
                        break;
                    }
                }
            }
        }
    } cout << count1;
}
