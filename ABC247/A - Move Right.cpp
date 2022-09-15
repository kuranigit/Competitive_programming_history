#include<bits/stdc++.h>
using namespace std;

int main() {
	string num;
	cin >> num;
	char a[4];
	a[0] = '0';
	for (int i = 0; i < 3; i++) {
		if (num[i] == '1')
			a[i + 1] = '1';
		else
			a[i + 1] = '0';
	}
	for (int i = 0; i < 4; i++) {
		num[i] = a[i];
	}
	cout << num;
}