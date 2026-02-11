#include <iostream>
using namespace std;

int main() {
    int arr1[3][2], a;
    for (int i = 0; i < 3; i++) {
        cin >> arr1[i][0] >> arr1[i][1];
    } for (int j = 1; j < 101; j++) {
        a = (j - 1)%3;
        if (arr1[a][1] + arr1[(a+1)%3][1] <= arr1[(a+1)%3][0]) {
            arr1[(a+1)%3][1] += arr1[a][1];
            arr1[a][1] = 0;
        } else {
            arr1[a][1] -= arr1[(a+1)%3][0] - arr1[(a+1)%3][1];
            arr1[(a+1)%3][1] = arr1[(a+1)%3][0];
        } cout << arr1[0][1] << " " << arr1[1][1] << " " << arr1[2][1] << endl;
    } cout << arr1[0][1] << endl << arr1[1][1] << endl << arr1[2][1];
}
