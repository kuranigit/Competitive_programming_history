#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int num;
    cin >> num;
    long long int sum = 1;
    for (int i = 0; i < 31; i++) {
        sum *= 2;
    }
    if (-sum <= num && num < sum) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}