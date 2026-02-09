#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
  ifstream cin ("gymnastics.in");
  ofstream cout ("gymnastics.out");
  int N, K, index1, index2, ans = 0;
  cin >> K >> N;
  int practices[10][20];
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
      cin >> practices[i][j];
    }
  } for (int i = 1; i < N+1; i++) {
    for (int j = 1; j < N+1; j++) {
      if (i == j) {
        continue;
      } int count1 = 0;
      for (int k = 0; k < K; k++) {
        for (int a = 0; a < N; a++) {
          if (practices[k][a] == i) {
            index1 = a;
            break;
          }
        } for (int b = 0; b < N; b++) {
          if (practices[k][b] == j) {
            index2 = b;
            break;
          }
        }
        if (index1 > index2) {
          count1++;
        }
      } 
      if (count1 == K) {
        ans++;
      }
    }
  } cout << ans;
}

