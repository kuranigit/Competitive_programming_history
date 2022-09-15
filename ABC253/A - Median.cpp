#include<bits/stdc++.h>
using namespace std;


int main() {
	int a, b, c;
	int num[3];
	cin >> a >> b >> c;
	num[0] = a;
	num[1] = b;
	num[2] = c;
	sort(num, num + 3);
	if (b == num[1]) {
		cout << "Yes";
	}
	else
		cout << "No";

}
