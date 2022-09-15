#include<bits/stdc++.h>
using namespace std;
int main() {
    double num;
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (x <= a) {
        cout << fixed << setprecision(15) << 1.0000000000;
    }
    else if (a < x && x <= b) {
        num = double(c) / double(b - a);
        cout << fixed << setprecision(15) << num;
    }
    else {
        cout << fixed << setprecision(15) << 0.0000000000;
    }
}