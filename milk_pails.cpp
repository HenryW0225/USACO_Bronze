#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ifstream cin ("pails.in");
    ofstream cout("pails.out");
    int X, Y, M, ans;
    cin >> X >> Y >> M;
    ans = Y-1;
    for (int i = 0; i < M/X + 1; i++) {
        ans = min(ans, (M - i*X)%Y);
    } cout << M - ans;
}
