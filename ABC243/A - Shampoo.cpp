#include<bits/stdc++.h>
using namespace std;
int main() {
	int v, a, b, c;
	int ans;
	cin >> v >> a >> b >> c;
	int num[3];
	num[0] = a;
	num[1] = b;
	num[2] = c;
	for (int i = 0; i < 3; i++) {
		v -= num[i];
		if (v < 0) {
			ans = i;
			break;
		}
		if (i == 2) {
			i = -1;
		}
	}
	if (ans == 0) {
		cout << "F";
	}
	else if (ans == 1) {
		cout << "M";
	}
	else {
		cout << "T";
	}
}