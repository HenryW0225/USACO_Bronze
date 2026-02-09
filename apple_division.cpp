#include <iostream>
#include <array>
using namespace std;

long long weights[20];
int n;

long long apples(int index, int sum1, int sum2) {
    if (index == n) {
        return abs(sum1-sum2);
    } return min(apples(index+1, sum1+weights[index], sum2), apples(index+1, sum1, sum2+weights[index]));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    } cout << apples(0, 0, 0);
}
