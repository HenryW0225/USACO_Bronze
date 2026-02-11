#include <fstream>
#include <iostream>
#include <set>
using namespace std;

int main() {
  ifstream cin ("whereami.in");
  ofstream cout ("whereami.out");
  int n;
  cin >> n;
  string S;
  cin >> S;
  for (int i = 1; i < n+1; i++) {
    set<string> temp = {};
    for (int j = 0; j < n-i+1; j++) {
      temp.insert(S.substr(j, i));
    } 
    if (temp.size() == n-i+1) {
      cout << i;
      return 0;
    }
  }
}
