#include <iostream>
#include <array>
using namespace std;

int main() {
    int N;
    cin >> N;
    int shuffle[N], cows_id[N];
    for (int i = 0; i < N; i++) {
        cin >> shuffle[i];
    } for (int i = 0; i < N; i++) {
        cin >> cows_id[i];
    } for (int i = 0; i < 3; i++) {
        int temp[N];
        for (int j = 0; j < N; j++) {
            temp[j] = cows_id[shuffle[j]-1];
        } for (int k = 0; k < N; k++) {
            cows_id[k] = temp[k];
        } 
    } for (int i = 0; i < N; i++) {
        cout << cows_id[i] << endl;
    }
}

