#include <iostream>
#include <algorithm>
using namespace std;

long long aoi(long x1, long y1, long x2, long y2, long x3, long y3, long x4, long y4) {
  if (x1 >= x4 or x2 <= x3 or y1 >= y4 or y2 <= y3) {
    return 0;
  } else {
    return (min(x2, x4) - max(x1, x3))*(min(y2, y4) - max(y1, y3));
  }
}

int main() {
  long x1, x2, y1, y2, x3, x4, y3, y4, x5, x6, y5, y6;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
  long long area = (x2-x1)*(y2-y1);
  if (area > aoi(x1, y1, x2, y2, x3, y3, x4, y4) + aoi(x1, y1, x2, y2, x5, y5, x6, y6) - aoi(x3, y3, x4, y4, x5, y5, x6, y6)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

