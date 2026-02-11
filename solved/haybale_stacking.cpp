/*#include <iostream>
#include <array>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    ifstream cin ("div7.in");
    ofstream cout("div7.out");
    int N, K, a, b, sum = 0;
    cin >> N >> K;
    int haybales[N+1] = {0};
    int ans[N] = {0};
    for (int i = 0; i < K; i++) {
        cin >> a >> b;
        haybales[a-1] -= 1;
        haybales[b] += 1;
    }
    for (int i = 0; i < N; i++) {
        ans[i] = sum - haybales[i];
        sum = ans[i];
    }
    sort(ans, ans + N);
    cout << ans[(N-1)/2];
}*/
