#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("cbarn.in");
  ofstream cout ("cbarn.out");
  int n, ans = 10e9, barn[1000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> barn[i];
  } for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 1; j < n; j++) {
      sum += (j)*(barn[(i+j)%n]);
    } ans = min(ans, sum);
  } cout << ans;
}
