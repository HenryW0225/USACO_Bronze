#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("herding.in");
  ofstream cout ("herding.out");
  long long a, b, c, d, e, f;
  cin >> a >> b >> c;
  d = min(min(a, b), c);
  f = max(max(a, b), c);
  e = a+b+c-d-f;
  if (f-e == 2 or e-d == 2) {
    cout << 1 << endl;
  } else if (max(f-e, e-d) == 1) {
    cout << 0 << endl;
  } else {
    cout << 2 << endl;
  } cout << max(f-e, e-d) - 1;
}
