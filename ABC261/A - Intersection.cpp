#include<bits/stdc++.h>
using namespace std;


int main() {
	int L1, R1, L2, R2;
	cin >> L1 >> R1 >> L2 >> R2;
	if (L2 < R1 && L1 < L2 && R1 < R2) {
		cout << R1 - L2;
	}
	else if (L1 < R2 && L2 < L1 && R2 < R1) {
		cout << R2 - L1;
	}
	else if (L1 <= L2 && R2 <= R1) {
		cout << R2 - L2;
	}
	else if (L2 <= L1 && R1 <= R2) {
		cout << R1 - L1;
	}
	else {
		cout << 0;
	}
}
