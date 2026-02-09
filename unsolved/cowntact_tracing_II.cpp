#include <iostream>
#include <array>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("pipe.in");
  ofstream cout ("pipe.out");
  int n = 0, start = 0, max_days = 10e6, index = 0, count1 = 0, ans = 0; 
  char sickness[300000];
  int islands[300000];
  cin >> n;
  int end = n-1;
  for (int i = 0; i < n; i++) {
    cin >> sickness[i];
  } while (sickness[start] == '1') {
    start++;
  } while (sickness[end] == '1') {
    end--;
  }
  for (int i = start; i < end; i++) {
    if (sickness[i] == 1) {
      count1++;
    } if (sickness[i] == '0' and count1 != 0) {
      islands[index] = count1;
      if (count1%2 == 0) {
        max_days = min(max_days, count1/2 - 1);
      } else {
        max_days = min(max_days, (count1-1)/2);
      }
      index++;
      count1 = 0;
    } 
  } 
  if (start > 0) {
    max_days = min(max_days, start-1);
  } if (n-end > 0) {
    max_days = min(max_days, n-end-1);
  } cout << max_days;
  if (start > 0) {
    ans += start/(max_days+1);
  } if (n-end > 0 and end != -1) {
    ans += (n-end)/(max_days+1);
  } for (int i = 0; i < index; i++) {
    ans += islands[i]/(2*max_days+1) + 1;
  } cout << ans;
}

