#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int length = max(x2, x4) - min(x1, x3);
    int width = max(y2, y4) - min(y1, y3);
    int sidelength = max(length, width);
    cout << sidelength*sidelength;
}
