#include<bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>P(N);
	int num = N;
	int sum = 0;
	int flag = true;

	for (int i = 0; i < N - 1; i++) {
		cin >> P[i];
	}

	while (flag)
	{
		for (int i = 0; i < N - 1; i++) {
			if ((i + 2) == num) {
				num = P[i];
				sum++;
			}
			if (num == 1) {
				flag = false;
				break;
			}
		}
	}

	cout << sum;
}
