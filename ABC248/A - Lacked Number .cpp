#include<bits/stdc++.h>
using namespace std;

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main() {
	string num;
	bool flag1 = true;
	bool flag2 = true;
	cin >> num;
	int sum[9];

	for (int i = 0; i < 9; i++) {
		sum[i] = ctoi(num[i]);
	}
	sort(sum, sum + 9);
	if (sum[0] == 0)
		flag2 = false;
	for (int i = 1; i < 9; i++) {
		if (sum[i] - sum[i - 1] > 1) {
			cout << sum[i] - 1;
			flag1 = false;
			break;
		}
	}
	if (flag2)
		cout << 0;
	else if (flag1)
		cout << 9;

}