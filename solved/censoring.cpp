#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream cin ("censor.in");
  ofstream cout ("censor.out");
  string S, T, R;
  cin >> S >> T;
  for (int i = 0; i < S.length(); i++) {
    R.push_back(S[i]);
    if (R.length() >= T.length() and R.substr(R.length() - T.length()) == T) {
      R.erase(R.length() - T.length(), T.length());
    }
  } cout << R;
} 
