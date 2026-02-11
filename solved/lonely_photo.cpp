#include <iostream>
#include <array>
using namespace std;

int main() {
  int n;
  long long ans = 0;
  cin >> n;
  char cows[500000];
  for (int i = 0; i < n; i++) {
    cin >> cows[i];
  }
  for (int i = 0; i < n; i++) {
    int index1 = i;
    int index2 = i;
    while (index1 - 1 >= 0 and cows[index1-1] != cows[i]) {
      index1 -= 1;
    } while (index2 + 1 <= n-1 and cows[index2+1] != cows[i]) {
      index2 += 1;
    } if (index2 - index1 < 2) {
      continue;
    } 
    for (int j = i; j >= index1; j--) {
      if (j == i and index2 - i > 1) {
        ans += index2 - i - 1;
      } else if (j == i-1 and index2 - i > 0) {
        ans += index2 - i;
      } else if (j < i-1) {
        ans += index2 + 1 - i;
      }
    }
  } cout << ans;
}
