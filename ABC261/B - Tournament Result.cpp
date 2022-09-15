#include<bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	bool flag = false;
	vector<vector<char>> num(N, vector<char>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (num[i][j] == 'W') {
				if (num[j][i] != 'L') {
					flag = true;
				}
			}
			if (num[i][j] == 'L') {
				if (num[j][i] != 'W') {
					flag = true;
				}
			}
			if (num[i][j] == 'D') {
				if (num[j][i] != 'D') {
					flag = true;
				}
			}
			if (i == j) {
				if (num[i][j] != '-') {
					flag = true;
				}
			}
		}
	}
	if (flag == true) {
		cout << "incorrect";
	}
	else {
		cout << "correct";
	}

}
