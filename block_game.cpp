#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("blocks.in");
  ofstream cout ("blocks.out");
  int n, ans[26] = {0};
  cin >> n;
  string boards[100][2];
  for (int i = 0; i < n; i++) {
    cin >> boards[i][0] >> boards[i][1];
  } for (int a = 97; a < 123; a++) {
    for (int b = 0; b < n; b++) {
      int choice1 = count(boards[b][0].begin(), boards[b][0].end(), char(a));
      int choice2 = count(boards[b][1].begin(), boards[b][1].end(), char(a));
      ans[a-97] += max(choice1, choice2);
    } 
  } for (int i = 0; i < 26; i++) {
    cout << ans[i] << endl;
  }
}

