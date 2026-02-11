#include <fstream>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<int> answer = {};

void day4 (vector<int> buckets1, vector<int> buckets2, int amount1, int amount2, int index) {
  answer.insert(amount1 + buckets2[index]);
}

void day3 (vector<int> buckets1, vector<int> buckets2, int amount1, int amount2, int index) {
  buckets2.push_back(buckets1[index]);
  buckets1.erase(buckets1.begin()+index);
  for (int i = 0; i < 11; i++) {
    day4(buckets1, buckets2, amount1 - buckets2[10], amount2 + buckets2[10], i);
  }
}

void day2 (vector<int> buckets1, vector<int> buckets2, int amount1, int amount2, int index) {
  buckets1.push_back(buckets2[index]);
  buckets2.erase(buckets2.begin()+index);
  for (int i = 0; i < 10; i++) {
    day3(buckets1, buckets2, amount1 + buckets1[9], amount2 - buckets1[9], i);
  }
}

void day1 (vector<int> buckets1, vector<int> buckets2, int amount1, int amount2, int index) {
  buckets2.push_back(buckets1[index]);
  buckets1.erase(buckets1.begin()+index);
  for (int i = 0; i < 11; i++) {
    day2(buckets1, buckets2, amount1 - buckets2[10], amount2 + buckets2[10], i);
  }
}

int main() {
  ifstream cin ("backforth.in");
  ofstream cout ("backforth.out");
  int a;
  vector<int> buckets1 = {}, buckets2 = {};
  for (int i = 0; i < 10; i++) {
    cin >> a;
    buckets1.push_back(a);
  } for (int i = 0; i < 10; i++) {
    cin >> a;
    buckets2.push_back(a);
  } 
  for (int i = 0; i < 10; i++) {
    day1(buckets1, buckets2, 1000, 1000, i);
  }
  cout << answer.size();
}
