#include <iostream>
#include <array>
using namespace std;

int N, K, index = 0;
char pasture[50][50];
int ans[50] = {0};

void floodfill(int x, int y, int turns, int direction) {
  if (x < 0 or x > N-1 or y < 0 or y > N-1 or turns > K or pasture[x][y] == 'H') {
    return;
  } if (x == N-1 and y == N-1) {
    ans[index] += 1;
    return;
  } if (direction == -1) {
    floodfill(x+1, y, turns+1, 1);
    floodfill(x, y+1, turns, -1);
  } else if (direction == 1) {
    floodfill(x+1, y, turns, 1);
    floodfill(x, y+1, turns+1, -1);
  } else {
    floodfill(x+1, y, turns, 1);
    floodfill(x, y+1, turns, -1);
  }
}

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> N >> K;
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        cin >> pasture[j][k];
      }
    } 
    floodfill(0, 0, 0, 0);
    index += 1;
  }
  for (int i = 0; i < T; i++) {
    cout << ans[i] << endl;
  }
}
