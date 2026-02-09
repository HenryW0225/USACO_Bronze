#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  map<string, int> zodiacs = {{"Ox", 0}, {"Tiger", 1}, {"Rabbit", 2}, {"Dragon", 3}, {"Snake", 4}, {"Horse", 5}, {"Goat", 6}, {"Monkey", 7}, {"Rooster", 8}, {"Dog", 9}, {"Pig", 10}, {"Rat", 11}};
  map<string, int> cows = {{"Bessie", 2400}};
  int n;
  cin >> n;
  string cow1, temp, cow2, animal, relation;
  string information[100][4];
  for (int i = 0; i < n; i++) {
    cin >> information[i][0] >> temp >> temp >> information[i][1] >> information[i][2] >> temp >> temp >> information[i][3];
  }
  for (int i = 0; i < n; i++) {
    int index = 0;
    if (information[i][1] == "previous") {
      index = cows[information[i][3]]-1;
      while (index%12 != zodiacs[information[i][2]]) {
        index--;
      } 
    } else {
      index = cows[information[i][3]]+1;
      while (index%12 != zodiacs[information[i][2]]) {
        index++;
      }
    } 
    cows.insert({information[i][0], index});
  } cout << abs(2400 - cows["Elsie"]);
}
