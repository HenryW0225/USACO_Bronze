#include <iostream>
#include <array>
#include <fstream>
#include <set>
#include <utility>
using namespace std;

int main() {
  ifstream cin ("tttt.in");
  ofstream cout ("tttt.out");
  char board[3][3];
  set<char> ans1;
  set<pair<char, char>> ans2;
  for (int i = 0; i < 3; i++) {
    cin >> board[i][0] >> board[i][1] >> board[i][2];
  } for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] and board[i][1] == board[i][2]) {
      ans1.insert(board[i][0]);
    } else if (board[i][0] == board[i][1] or board[i][0] == board[i][2] or board[i][1] == board[i][2]) {
      if (board[i][0] != board[i][1]) {
        if ((int)board[i][0] < (int)board[i][1]) {
          ans2.insert({board[i][0], board[i][1]});
        } else {
          ans2.insert({board[i][1], board[i][0]});
        }
      } else {
        if ((int)board[i][0] < (int)board[i][2]) {
          ans2.insert({board[i][0], board[i][2]});
        } else {
          ans2.insert({board[i][2], board[i][0]});
        }
      }
    } if (board[0][i] == board[1][i] and board[1][i] == board[2][i]) {
      ans1.insert(board[0][i]);
    } else if (board[0][i] == board[1][i] or board[0][i] == board[2][i] or board[1][i] == board[2][i]) {
      if (board[0][i] != board[1][i]) {
        if ((int)board[0][i] < (int)board[1][i]) {
          ans2.insert({board[0][i], board[1][i]});
        } else {
          ans2.insert({board[1][i], board[0][i]});
        }
      } else {
        if ((int)board[0][i] < (int)board[2][i]) {
          ans2.insert({board[0][i], board[2][i]});
        } else {
          ans2.insert({board[2][i], board[0][i]});
        }
      }
    } 
  } if (board[0][0] == board[1][1] and board[1][1] == board[2][2]) {
    ans1.insert(board[0][0]);
  } else if (board[0][0] == board[1][1] or board[0][0] == board[2][2] or board[1][1] == board[2][2]) {
    if (board[0][0] != board[1][1]) {
      if ((int)board[0][0] < (int)board[1][1]) {
        ans2.insert({board[0][0], board[1][1]});
      } else {
        ans2.insert({board[1][1], board[0][0]});
      }
    } else {
      if ((int)board[0][0] < (int)board[2][2]) {
        ans2.insert({board[0][0], board[2][2]});
      } else {
        ans2.insert({board[2][2], board[0][0]});
      }
    }
  } if (board[0][2] == board[1][1] and board[1][1] == board[2][0]) {
    ans1.insert(board[0][2]);
  } else if (board[0][2] == board[1][1] or board[0][2] == board[2][0] or board[1][1] == board[2][0]) {
    if (board[0][2] != board[1][1]) {
      if ((int)board[0][2] < (int)board[1][1]) {
        ans2.insert({board[0][2], board[1][1]});
      } else {
        ans2.insert({board[1][1], board[0][2]});
      }
    } else {
      if ((int)board[0][0] < (int)board[2][0]) {
        ans2.insert({board[0][0], board[2][0]});
      } else {
        ans2.insert({board[2][0], board[0][0]});
      }
    }
  } cout << ans1.size() << endl << ans2.size();
}

