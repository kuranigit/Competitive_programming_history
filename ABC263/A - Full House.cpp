#include<bits/stdc++.h>
using namespace std;

int main() {
	int num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	sort(num, num + 5);
	if (num[0] == num[1] && num[1] == num[2] && num[3] == num[4]) {
		cout << "Yes";
	}
	else if (num[0] == num[1] && num[2] == num[3] && num[3] == num[4]) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
