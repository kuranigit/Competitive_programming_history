#include<bits/stdc++.h>
using namespace std;


int main() {
	int N, M, X, T, D;
	int sum = 0;
	cin >> N >> M >> X >> T >> D;
	for (int i = M; i < N; i++) {
		if (X <= i && i <= N) {
			sum += 0;
		}
		else {
			sum += D;
		}
	}
	cout << T - sum;
}
