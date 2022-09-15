#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
	bool flag = true;
	cin >> N;
	vector< int > num(N);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());

	if (num[0] == 0) {
		for (int i = 1; i < N; i++) {

			if ((num[i] - num[i - 1]) > 1) {
				cout << num[i - 1] + 1;
				flag = false;
				break;
			}

		}
		if (flag) {
			cout << num[N - 1] + 1;
		}
	}
	else {
		cout << 0;
	}
}