#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	if (str.length() == 1) {
		for (int i = 0; i < 6; i++) {
			cout << str;
		}
	}
	else if (str.length() == 2) {
		for (int i = 0; i < 3; i++) {
			cout << str;
		}
	}
	else if (str.length() == 3) {
		for (int i = 0; i < 2; i++) {
			cout << str;
		}
	}
}
