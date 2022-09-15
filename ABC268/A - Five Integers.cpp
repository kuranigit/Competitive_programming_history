#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;
	bool flag = true;
	if (S.length() > T.length()) {
		cout << "No";
		return 0;
	}
	else {
		for (int i = 0; i < S.length(); i++) {
			if (S[i] != T[i]) {
				flag = false;
			}
		}
	}

	if (flag) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}


