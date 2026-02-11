#include <fstream>
#include <iostream>
#include <array>
using namespace std;

int n, order[100];

bool check(int index) {
    for (int i = index; i < n-1; i++) {
        if (order[i] > order[i+1]) {
            return false;
        }
    } return true;
}

int main() {
    ifstream cin ("sleepy.in");
    ofstream cout ("sleepy.out");
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> order[i];
    } 
    while (check(0) != true) {
        for (int i = 1; i < n; i++) {
            int temp = order[i-1];
            order[i-1] = order[i];
            order[i] = temp;
            if (check(i) == true) {
                i = n;
            }
        } ans += 1;
    } cout << ans;
}
