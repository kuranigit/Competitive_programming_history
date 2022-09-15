#include<bits/stdc++.h>
using namespace std;

int main() {
	int X, Y, N;
	cin >> X >> Y >> N;
	int sum = 0, sum1 = 0;

	sum1 = X * N;
	while (true)
	{
		if (N < 3)
			break;
		N -= 3;
		sum += Y;
	}
	while (true)
	{
		if (N == 0)
			break;
		N--;
		sum += X;
	}

	if (sum1 > sum) {
		cout << sum;
	}
	else {
		cout << sum1;
	}

}
