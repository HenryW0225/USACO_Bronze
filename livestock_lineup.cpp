#include <iostream>
#include <fstream>
#include <array>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n;
string cows[8] = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
string orders[7][2];

int position(string s) {
  for (int i = 0; i < 8; i++) {
    if (cows[i] == s) {
      return i;
    }
  } return 0;
}

bool check() {
  for (int i = 0; i < n; i++) {
    if (abs(position(orders[i][0]) - position(orders[i][1])) != 1) {
      return false;
    }
  } return true;
}

int main() {
  ifstream cin ("lineup.in");
  ofstream cout ("lineup.out");
  cin >> n;
  string temp;
  for (int i = 0; i < n; i++) {
    cin >> orders[i][0] >> temp >> temp >> temp >> temp >> orders[i][1];
  } while (check() == false) {
    next_permutation(begin(cows), end(cows));
  } for (int i = 0; i < 8; i++) {
    cout << cows[i] << endl;
  }
}

