#include <iostream>
#include <array>
#include <fstream>
using namespace std;

int main() {
  ifstream cin ("breedflip.in");
  ofstream cout ("breedflip.out");
  int n, ans = 0;
  cin >> n;
  char current[1000], desired[1000];
  for (int i = 0; i < n; i++) {
    cin >> desired[i];
  } for (int i = 0; i < n; i++) {
    cin >> current[i];
  } for (int i = 0; i < n; i++) {
    if (current[i] == desired[i]) {
      continue;
    }
    int index = i+1;
    while (index < n and current[index] != desired[index]) {
      current[index] = desired[index];
      index += 1;
    } i = index-1;
    ans += 1;
  } cout << ans;
} 
