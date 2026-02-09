#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int n, count1;
vector<int> haybales;
int visited[100] = {0};

void explosion(vector<int> current, int radius) {
  vector<int> temp = {};
  for (int i = 0; i < current.size(); i++) {
    int index1 = current[i]-1;
    int index2 = current[i]+1;
    while (index1 >= 0 and haybales[index1] >= haybales[current[i]] - radius) {
      if (visited[index1] == 0) {
        visited[index1] = 1;
        temp.push_back(index1);
        count1 += 1;
      } index1 -= 1;
    } while (index2 <= n-1 and haybales[index2] <= haybales[current[i]] + radius) {
      if (visited[index2] == 0) {
        visited[index2] = 1;
        temp.push_back(index2);
        count1 += 1;
      } index2 += 1;
    }
  } 
  if (temp.size() != 0) {
    explosion(temp, radius+1);
  } return;
}

int main() {
  ifstream cin ("angry.in");
  ofstream cout ("angry.out");
  cin >> n;
  vector<int> current;
  int a, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    haybales.push_back(a);
  } 
  sort(haybales.begin(), haybales.end());
  for (int i = 0; i < n; i++) {
    count1 = 1;
    for (int j = 0; j < n; j++) {
      visited[j] = 0;
    } current.clear();
    current.push_back(i);
    visited[i] = 1;
    explosion(current, 1);
    ans = max(ans, count1);
  } cout << ans;
} 

