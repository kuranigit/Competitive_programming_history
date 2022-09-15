#include<bits/stdc++.h>
using namespace std;

int main() {
	int Y;
	cin >> Y;
	int num;
	for (int i = Y;; i++) {
		if (i % 4 == 2) {
			num = i;
			break;

		}
	}
	cout << num;
}
