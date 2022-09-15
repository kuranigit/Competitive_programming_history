#include<bits/stdc++.h>
using namespace std;
int main() {
    int num, a;
    int sum = 1;
    int arr[1000];
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> a;
        arr[i] = a;
    }
    arr[num] = 0;
    sort(arr, arr + num);
    for (int j = 0; j < num; j++) {
        if (arr[j] != arr[j + 1]) {
            sum++;
        }
    }
    cout << sum - 1;
}