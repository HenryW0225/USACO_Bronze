#include <fstream>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("guess.in");
  ofstream cout ("guess.out");
  int n, ans = 0;
  cin >> n;
  string animals[100][101];
  int length[100];
  for (int i = 0; i < n; i++) {
    cin >> animals[i][0] >> length[i];
    for (int j = 0; j < length[i]; j++) {
      cin >> animals[i][j+1];
    }
  } 
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      int common = 0;
      for (int a = 1; a < length[i]+1; a++) {
        for (int b = 1; b < length[j]+1; b++) {
          if (animals[i][a] == animals[j][b]) {
            common += 1;
            b = length[j];
          }
        }
      } ans = max(ans, common);
    }
  } cout << ans + 1;
}
