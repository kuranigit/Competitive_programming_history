#include<bits/stdc++.h>
using namespace std;
int main() {
    double num;
    cin >> num;
    double kaiga = num * (12800000 + num);
    cout << setprecision(20) << sqrt(kaiga);
}