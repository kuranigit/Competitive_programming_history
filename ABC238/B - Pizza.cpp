#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[370];
    arr[0] = 0;
    int N;
    int num;
    int sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> num;
        if (i == 1) {
            arr[i] = num;
            sum += num;
        }
        else {
            sum += num;
            arr[i] = sum % 360;
        }
    }
    arr[N + 1] = 360;
    sort(arr, arr + N + 2, greater< int >());
    for (int i = 0; i < N + 1; i++) {
        arr[i] = arr[i] - arr[i + 1];
    }
    sort(arr, arr + N + 1, greater< int >());

    cout << arr[0];
}