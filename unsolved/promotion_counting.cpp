#include <iostream>
#include <array>
using namespace std;

int main() {
    int statistics[4][2], ans[3];
    for (int i = 0; i < 4; i++) {
        cin >> statistics[i][0] >> statistics[i][1];
    } 
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            ans[j] += statistics[i][1] - statistics[i][0];
        }
    } 
    for (int i = 0; i < 3; i++) {
        cout << ans[i] << endl;
    }
}
