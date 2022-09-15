#include<bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector <vector<int>>v(num, vector<int>(num, 1));
	for (int i = 2; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (0 < j && j < i) {
				v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
			}
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (j <= i)
				cout << v[i][j] << " ";
		}
		cout << endl;
	}
}
