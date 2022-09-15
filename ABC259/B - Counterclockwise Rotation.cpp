#include<bits/stdc++.h>
using namespace std;


int main() {
	double PI = 3.14159265358979;
	double a, b, d;
	double kakudo;
	double r;
	cin >> a >> b >> d;
	r = sqrt(a * a + b * b);
	kakudo = atan2(b, a) + ((d / 180.0) * PI);
	cout << fixed << setprecision(15) << r * cos(kakudo) << " " << fixed << setprecision(15) << r * sin(kakudo);
}
