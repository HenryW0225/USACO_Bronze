#include <fstream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
  ifstream cin ("diamond.in");
  ofstream cout ("diamond.out");
  int N, K, list[1000], count, ans = 0;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> list[i];
  } auto it = begin(list);
  sort(it, it+N);
  for (int i = 0; i < N; i++) {
    int a = i+1;
    count = 0;
    while (list[a] - list[i] <= K && a < N) {
      count += 1;
      a += 1;
    } ans = max(ans, count);
  } cout << ans+1; 
}
