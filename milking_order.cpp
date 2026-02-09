#include <fstream>
#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;

int N, M, K, a, b, decision = -1;
int order[101], heirarchy[100];

void milking_order(int i) {
  if (order[i] != 0) {
    return;
  } int temp[101];
  copy(begin(order), end(order), begin(temp));
  auto index = begin(temp) + 1;
  temp[i] = 1;
  for (int j = 0; j < M; j++) {
    if (find(begin(temp), end(temp), heirarchy[j]) != end(temp) or temp[N-1] == heirarchy[j]) {
      if (find(begin(temp), end(temp), heirarchy[j]) < index) {
        return;
      } index = find(begin(temp), end(temp), heirarchy[j]) + 1;
    } else {
      while (*index != 0) {
        index++;
      } *index = heirarchy[j];
      index++;
    } 
  } a = 0;
}

int main() {
  ifstream cin ("milkorder.in");
  ofstream cout ("milkorder.out");
  cin >> N >> M >> K; 
  for (int i = 0; i < M; i++) {
    cin >> heirarchy[i];
    if (heirarchy[i] == 1) {
      decision = i;
    }
  } 
  for (int i = 0; i < K; i++) {
    cin >> a >> b;
    if (a == 1) {
      cout << b;
      return 0;
    } order[b] = a;
  } 
  if (decision != -1) {
    auto index = begin(order) + 1;
    for (int i = 0; i < decision+1; i++) {
      if (find(begin(order), end(order), heirarchy[i]) != end(order) or order[N-1] == heirarchy[i]) {
        index = find(begin(order), end(order), heirarchy[i]) + 1;
        continue;
      } while (*index != 0) {
        index++;
      } index++;
    } int c = 0;
    for (auto i = begin(order) + 1; i < index+1; i++) {
      c++;
    } cout << c-1;
    return 0;
  } a = -1;
  for (int i = 1; i < N+1; i++) {
    milking_order(i);
    if (a != -1) {
      cout << i;
      break;
    }
  }
}
