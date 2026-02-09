#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("cowqueue.in");
  ofstream cout ("cowqueue.out");
  int n, a, b, time = 0;
  vector<pair<int, int>> cows;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cows.push_back({a, b});
  } sort(cows.begin(), cows.end());
  for (int i = 0; i < n; i++) {
    if (time <= cows[i].first) {
      time = cows[i].first + cows[i].second;
    } else {
      time += cows[i].second;
    }
  } cout << time;
} 

