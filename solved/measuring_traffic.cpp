#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("traffic.in");
  ofstream cout ("traffic.out");
  int N, start_place = -1, end_place, traffic_measure[100][2], lower_bound, upper_bound, lower_bound1, upper_bound1;
  string highway[100];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> highway[i] >> traffic_measure[i][0] >> traffic_measure[i][1];
    if (highway[i] == "none") {
      if (start_place == -1) {
        start_place = i;
      } end_place = i;
    } 
  }
  lower_bound = traffic_measure[start_place][0];
  upper_bound = traffic_measure[start_place][1];
  for (int j = start_place+1; j < N; j++) {
    if (highway[j] == "none") {
      lower_bound = max(lower_bound, traffic_measure[j][0]);
      upper_bound = min(upper_bound, traffic_measure[j][1]);
    } else if (highway[j] == "on") {
      lower_bound += traffic_measure[j][0];
      upper_bound += traffic_measure[j][1];
    } else {
      lower_bound -= traffic_measure[j][1];
      upper_bound -= traffic_measure[j][0];
    } 
  } 
  lower_bound1 = traffic_measure[end_place][0];
  upper_bound1 = traffic_measure[end_place][1];
  for (int j = end_place-1; j > -1; j--) {
    if (highway[j] == "none") {
      lower_bound1 = max(lower_bound1, traffic_measure[j][0]);
      upper_bound1 = min(upper_bound1, traffic_measure[j][1]);
    } else if (highway[j] == "on") {
      lower_bound1 -= traffic_measure[j][1];
      upper_bound1 -= traffic_measure[j][0];
    } else {
      lower_bound1 += traffic_measure[j][0];
      upper_bound1 += traffic_measure[j][1];
    }
  } lower_bound = max(lower_bound, 0);
  upper_bound = max(upper_bound, 0);
  lower_bound1 = max(lower_bound1, 0);
  upper_bound1 = max(upper_bound1, 0);
  cout << lower_bound1 << " " << upper_bound1 << endl;
  cout << lower_bound << " " << upper_bound;
}

