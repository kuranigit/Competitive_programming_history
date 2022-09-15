#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int flag1 = 0;
	int flag2 = 0;
	string name[205];
	for (int i = 0; i < (2 * N); i++) {
		cin >> name[i];
	}

	for (int i = 0; i < (2 * N); i++) {
		for (int j = 0; j < (2 * N); j++) {
			if (i % 2 == 0) {
				if (j == i || j == i + 1) {
					continue;
				}
				else {
					if (name[i] == name[j])
						flag1 = 1;
				}
			}
			else {
				if (j == i || j == i - 1) {
					continue;
				}
				else {
					if (name[i] == name[j])
						flag2 = 1;
				}
			}
		}
	}

	if (flag1 == 1 && flag2 == 1)
		cout << "No";
	else
		cout << "Yes";
}