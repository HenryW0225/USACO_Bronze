#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int N, temp = 0;
long long cows[100000];

int largest() {
    int ans;
    long long biggest;
    for (int i = 0; i < N; i++) {
        if (cows[i] > biggest) {
            ans = i;
        }
    } return ans;
}

bool check() {
    if (cows[N-1] < 0) {
        temp = 1;
    }
    for (int i = 0; i < N-1; i++) {
        if (cows[i] < 0) {
            temp = 1;
        }
        if (cows[i] != cows[i+1]) {
            return false;
        }
    } return true;
}


int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> cows[i];
        } temp = 0;
        int ans = 0;
        while (check() == false and temp == 0) {
            int index = largest();
            if (index == 0) {
                cows[index] -= 1;
                cows[index+1] -= 1;
            } else if (index == N-1) {
                cows[index] -= 1;
                cows[index-1] -= 1;
            } else {
                cows[index] -= 1;
                if (cows[index-1] >= cows[index+1]) {
                    cows[index-1] -= 1;
                } else {
                    cows[index+1] -= 1;
                }
            } ans += 1;
        } if (temp == 0) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
