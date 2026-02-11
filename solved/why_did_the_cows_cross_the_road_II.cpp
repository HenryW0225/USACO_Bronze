#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int main() {
  ifstream cin ("circlecross.in");
  ofstream cout ("circlecross.out");
  int order[26][2], ans = 0;
  char c;
  for (int i = 0; i < 26; i++) {
    order[i][0] = 0;
    order[i][1] = 0;
  }
  for (int i = 1; i < 53; i++) {
    cin >> c;
    if (order[(int)c - 65][0] == 0) {
      order[(int)c - 65][0] = i;
    } else {
      order[(int)c - 65][1] = i;
    }
  } 
  for (int i = 0; i < 25; i++) {
    for (int j = i+1; j < 26; j++) {
      if (order[i][0] < order[j][0] and order[i][1] > order[j][0] and order[i][1] < order[j][1]) {
        ans++;
      } else if (order[i][0] > order[j][0] and order[i][0] < order[j][1] and order[i][1] > order[j][1]) {
        ans++;
      }
    }
  } cout << ans;
}
