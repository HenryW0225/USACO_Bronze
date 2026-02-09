#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("lifeguards.in");
  ofstream cout ("lifeguards.out");
  int n, time = 0, ans = 0;
  cin >> n;
  int lifeguards[100][2];
  int day[1000] = {0};
  for (int i = 0; i < n; i++) {
    cin >> lifeguards[i][0] >> lifeguards[i][1];
    for (int j = lifeguards[i][0]; j < lifeguards[i][1]; j++){
      day[j] += 1;
    }
    time = max(time, lifeguards[i][1]);
  } 
  for (int i = 0; i < n; i++) {
    int count1 = 0;
    for (int j = lifeguards[i][0]; j < lifeguards[i][1]; j++) {
      day[j] -= 1;
    } for (int k = 0; k < time; k++) {
      if (day[k] > 0) {
        count1 += 1;
      }
    } ans = max(ans, count1);
    for (int j = lifeguards[i][0]; j < lifeguards[i][1]; j++) {
      day[j] += 1;
    }
  } cout << ans;
}

