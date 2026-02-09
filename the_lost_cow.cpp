#include <iostream>
#include <cmath>
#include <fstream> 
using namespace std;

int main () {
  ifstream cin ("lostcow.in");
  ofstream cout("lostcow.out");
  int x, y, total_distance, a;
  cin >> x >> y;
  y = y - x;
  x = 0, a = 1, total_distance = 0;
  if (y >= 0) {
    while (x < y) {
      total_distance += abs(a) + abs(x);
      x = a;
      a *= -2;
    }
  } else {
    while (x > y) {
      total_distance += abs(a) + abs(x);
      x = a;
      a *= -2;
    }
  } total_distance -= abs(x - y);
  cout << total_distance;
}

