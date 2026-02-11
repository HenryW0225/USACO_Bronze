/*#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream cin ("measurement.in");
  ofstream cout ("measurement.out");
  map<string, int> cows = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};
  int N, ans = 0, a, b, highest = 111;
  tuple<int, string, int> day[100];
  char c;
  string s;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a >> s >> c >> b;
    day[i] = make_tuple(a, s, b);
    if (c == '-') {
      get<2>(day[i]) *= -1;
    }
  } 
  sort(day, day + N);
  for (int i = 0; i < N; i++) {
    int temp = 0;
    cows[get<1>(day[i])] += get<2>(day[i]);
    if (cows["Bessie"] >= cows["Elsie"] and cows["Bessie"] >= cows["Mildred"]) {
      temp += 100;
    } if (cows["Elsie"] >= cows["Bessie"] and cows["Elsie"] >= cows["Mildred"]) {
      temp += 10;
    } if (cows["Mildred"] >= cows["Bessie"] and cows["Mildred"] >= cows["Elsie"]) {
      temp += 1;
    } if (temp != highest) {
      ans += 1;
    } 
    highest = temp;
  } cout << ans;
} */
