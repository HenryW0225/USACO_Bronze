/*#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long answer[50] = {0};
  char directions[50];
  long long coordinates[50][2];
  long long original[50][2];
  vector<long long> crossroads = {};
  set<long long> temp = {};
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> directions[i] >> coordinates[i][0] >> coordinates[i][1];
    original[i][0] = coordinates[i][0];
    original[i][1] = coordinates[i][1];
  } 
  for (int i = 0; i < N-1; i++) {
    for (int j = i+1; j < N; j++) {
      if (directions[i] == 'N' && directions[j] == 'N' and coordinates[i][0] == coordinates[j][0]) {
        temp.insert(abs(coordinates[i][1] - coordinates[j][1]));
      } else if (directions[i] == 'E' && directions[j] == 'E' and coordinates[i][1] == coordinates[j][1]) {
        temp.insert(abs(coordinates[i][0] - coordinates[j][0]));
      } else if (directions[i] == 'E' and directions[j] == 'N' and coordinates[i][0] <= coordinates[j][0] and coordinates[i][1] >= coordinates[j][1]) {
        if (coordinates[j][0]-coordinates[i][0] != coordinates[i][1]-coordinates[j][1]) {
          temp.insert(max(coordinates[j][0]-coordinates[i][0], coordinates[i][1]-coordinates[j][1]));
        }
      } else if (directions[i] == 'N' and directions[j] == 'E' and coordinates[j][0] <= coordinates[i][0] and coordinates[j][1] >= coordinates[i][1]) {
        if (coordinates[i][0]-coordinates[j][0] != coordinates[j][1]-coordinates[i][1]) {
          temp.insert(max(coordinates[i][0]-coordinates[j][0], coordinates[j][1]-coordinates[i][1]));
        }
      }
    }
  }
  for (auto it : temp) {
    crossroads.push_back(it);
  }
  for (int i = crossroads.size()-1; i > 0; i--) {
    crossroads[i] = crossroads[i] - crossroads[i-1];
  } 
  for (int i = 0; i < crossroads.size(); i++) {
    for (int j = 0; j < N; j++) {
      if (answer[j] == 0) {
        if (directions[j] == 'N') {
          coordinates[j][1] += crossroads[i];
        } else {
          coordinates[j][0] += crossroads[i];
        }
      }
    }
    for (int j = 0; j < N-1; j++) {
      for (int k = j+1; k < N; k++) {
        if (answer[j] == 0 or answer[k] == 0) {
          if (directions[j] == 'N' and directions[k] == 'N' and coordinates[j][0] == coordinates[k][0]) {
            if (original[j][1] == coordinates[k][1]) {
              answer[k] = coordinates[k][1] - original[k][1];
            } else if (original[k][1] == coordinates[j][1]) {
              answer[j] = coordinates[j][1] - original[j][1];
            }
          } else if (directions[j] == 'E' and directions[k] == 'E' and coordinates[j][1] == coordinates[k][1]) {
            if (original[j][0] > coordinates[k][0]) {
              answer[k] = coordinates[k][0] - original[k][0];
            } else if (original[k][0] == coordinates[j][0]) {
              answer[j] = coordinates[j][0] - original[j][0];
            }
          } else if (directions[j] == 'E' and directions[k] == 'N' and original[j][0] <= original[k][0] and original[j][1] >= original[k][1]) {
            if (coordinates[j][1] == coordinates[k][1] and coordinates[j][0] > coordinates[k][0]) {
              answer[k] = coordinates[k][1] - original[k][1];
            } else if (coordinates[j][0] == coordinates[k][0] and coordinates[k][1] > coordinates[j][1]) {
              answer[j] = coordinates[j][0] - original[j][0];
            }
          } else if (directions[j] == 'N' and directions[k] == 'E' and original[k][0] <= original[j][0] and original[k][1] >= original[j][1]) {
            if (coordinates[k][1] == coordinates[j][1] and coordinates[k][0] > coordinates[j][0]) {
              answer[j] = coordinates[j][1] - original[j][1];
            } else if (coordinates[k][0] == coordinates[j][0] and coordinates[j][1] > coordinates[k][1]) {
              answer[k] = coordinates[k][0] - original[k][0];
            }
          }
        } 
      }
    } 
  }
  for (int i = 0; i < N; i++) {
    if (answer[i] == 0) {
      cout << "Infinity" << endl;
    } else {
      cout << answer[i] << endl;
    }
  }
} 
*/