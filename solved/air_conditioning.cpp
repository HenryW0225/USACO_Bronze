#include <iostream> 
#include <array> 
#include <algorithm> 
using namespace std;

int main() {
  int n, ans = 0, index;
  cin >> n;
  int desired[100000];
  int current[100000];
  int change[100000];
  for (int i = 0; i < n; i++) {
    cin >> desired[i];
  } for (int i = 0; i < n; i++) {
    cin >> current[i];
  } for (int i = 0; i < n; i++) {
    change[i] = desired[i] - current[i];
  } for (int i = 0; i < n; i++) {
    if (change[i] > 0) {
      index = i;
      while (change[index] > 0) {
        change[index] -= 1;
        index += 1;
      } ans += 1;
      i -= 1;
    } else if (change[i] < 0) {
      index = i;
      while (change[index] < 0) {
        change[index] += 1;
        index += 1;
      } ans += 1;
      i -= 1;
    }
  } cout << ans;
}

