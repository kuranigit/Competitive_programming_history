#include<bits/stdc++.h>
using namespace std;


int main() {
	int K;
	int h, m;
	cin >> K;
	if (K >= 60) {
		h = 22;
		m = K - 60;
	}
	else {
		h = 21;
		m = K;
	}
	if (m < 10) {
		cout << h << ":" << 0 << m;
	}
	else {
		cout << h << ":" << m;
	}
}
