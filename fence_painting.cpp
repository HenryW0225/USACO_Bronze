#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int intersection = max(min(b, d) - max(a, c), 0);
    cout << (b-a) + (d-c) - intersection;
}
