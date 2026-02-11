#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("triangles.in");
  ofstream cout ("triangles.out");
  int n, ans = 0, area;
  cin >> n; 
  int triangles[100][2];
  for (int i = 0; i < n; i++) {
    cin >> triangles[i][0] >> triangles[i][1];
  } for (int i = 0; i < n-2; i++) {
    for (int j = i+1; j < n-1; j++) {
      for (int k = j+1; k < n; k++) {
        if (triangles[i][0] == triangles[j][0] and triangles[i][1] == triangles[k][1]) {
          area = abs(triangles[i][1] - triangles[j][1])*abs(triangles[i][0] - triangles[k][0]);
          ans = max(ans, area);
        } else if (triangles[i][0] == triangles[k][0] and triangles[i][1] == triangles[j][1]) {
          area = abs(triangles[i][1] - triangles[k][1])*abs(triangles[i][0] - triangles[j][0]);
          ans = max(ans, area);
        } else if (triangles[j][0] == triangles[i][0] and triangles[j][1] == triangles[k][1]) {
          area = abs(triangles[j][1] - triangles[i][1])*abs(triangles[j][0] - triangles[k][0]);
          ans = max(ans, area);
        } else if (triangles[j][0] == triangles[k][0] and triangles[j][1] == triangles[i][1]) {
          area = abs(triangles[j][1] - triangles[k][1])*abs(triangles[j][0] - triangles[i][0]);
          ans = max(ans, area);
        } else if (triangles[k][0] == triangles[i][0] and triangles[k][1] == triangles[j][1]) {
          area = abs(triangles[k][1] - triangles[i][1])*abs(triangles[k][0] - triangles[j][0]);
          ans = max(ans, area);
        } else if (triangles[k][0] == triangles[j][0] and triangles[k][1] == triangles[i][1]) {
          area = abs(triangles[i][1] - triangles[j][1])*abs(triangles[i][0] - triangles[j][0]);
          ans = max(ans, area);
        }
      }
    }
  } cout << ans;
}

