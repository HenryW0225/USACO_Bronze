#include <iostream>
#include <algorithm>
using namespace std;

int area(int a, int b) {
    return a*b;
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, l1, w1, l2, w2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    l1 = max(min(x2, x6) - max(x1, x5), 0);
    w1 = max(min(y2, y6) - max(y1, y5), 0);
    l2 = max(min(x4, x6) - max(x3, x5), 0);
    w2 = max(min(y4, y6) - max(y3, y5), 0);
    cout << area(x2 - x1, y2 - y1) + area(x4 - x3, y4 - y3) - area(l1, w1) - area(l2, w2);
}
