#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ifstream cin ("billboard.in");
    ofstream cout ("billboard.out");
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x3 <= x1 and x2 <= x4 and y3 <= y1 and y2 <= y4) {
        cout << 0;
    } else if (x3 <= x1 and x4 >= x2) {
        if (y1 < y3 && y2 >= y3 && y2 <= y4) {
            cout << (y3-y1)*(x2-x1);
        } else if (y2 > y4 && y1 >= y3 && y2 <= y4) {
            cout << (y2-y4)*(x2-x1);
        } else {
          cout << (x2-x1)*(y2-y1);
        }
    } else if (y3 <= y1 and y4 >= y2) {
        if (x1 < x3 && x2 >= x3 && x2 <= x4) {
            cout << (x3-x1)*(y2-y1);
        } else if (x2 > x4 && x1 >= x3 && x1 <= x4) {
            cout << (x2-x4)*(y2-y1);
        } else {
          cout << (x2-x1)*(y2-y1);
        }
    } else {
        cout << (x2-x1)*(y2-y1);
    }
}
