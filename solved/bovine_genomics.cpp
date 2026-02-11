#include <iostream>
#include <fstream>
#include <array>
using namespace std;

int main() {
  ifstream cin ("cownomics.in");
  ofstream cout ("cownomics.out");
  int N, M, ans = 0;
  char genes[200][100];
  cin >> N >> M;
  for (int i = 0; i < 2*N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> genes[i][j];
    }
  } for (int i = 0; i < M; i++) {
    int count1 = 0;
    int temp1[4] = {0, 0, 0, 0};
    int temp2[4] = {0, 0, 0, 0};
    for (int j = 0; j < N; j++) {
      if (genes[j][i] == 'A') {
        temp1[0] = 1;
      } else if (genes[j][i] == 'C') {
        temp1[1] = 1;
      } else if (genes[j][i] == 'G') {
        temp1[2] = 1;
      } else {
        temp1[3] = 1;
      }
    } for (int j = N; j < 2*N; j++) {
      if (genes[j][i] == 'A') {
        temp2[0] = 1;
      } else if (genes[j][i] == 'C') {
        temp2[1] = 1;
      } else if (genes[j][i] == 'G') {
        temp2[2] = 1;
      } else {
        temp2[3] = 1;
      }
    } 
    for (int j = 0; j < 4; j++) {
      if (temp1[j] == 1 and temp2[j] == 1) {
        count1 = 1;
      }
    } if (count1 == 0) {
      ans++;
    }
  } cout << ans;
}

