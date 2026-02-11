#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n][3];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i][0] >>  arr1[i][1] >> arr1[i][2];
    } int arr2[3] = {1, 0, 0};
    int count1 = 0;
    for (int j = 0; j < n; j++) {
        swap(arr2[arr1[j][0]-1], arr2[arr1[j][1]-1]);
        if (arr2[arr1[j][2]-1] == 1) {
            count1 += 1;
        }
    } int arr3[3] = {0, 1, 0};
    int count2 = 0;
    for (int j = 0; j < n; j++) {
        swap(arr3[arr1[j][0]-1], arr3[arr1[j][1]-1]);
        if (arr3[arr1[j][2]-1] == 1) {
            count2 += 1;
        }
    } int arr4[3] = {0, 0, 1};
    int count3 = 0;
    for (int j = 0; j < n; j++) {
        swap(arr4[arr1[j][0]-1], arr4[arr1[j][1]-1]);
        if (arr4[arr1[j][2]-1] == 1) {
            count3 += 1;
        }
    } count1 = max(count1, count2);
    count1 = max(count1, count3);
    cout << count1;
}
