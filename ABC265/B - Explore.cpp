#include<bits/stdc++.h>
using namespace std;

int main() {
	long long N, M, T;
	bool flag = true; //ƒS[ƒ‹‚Å‚«‚é‚È‚çtrue
	long long num = 0;
	cin >> N >> M >> T;
	vector<long long>A(N);
	vector<long long>X(M);
	vector<long long>Y(M);

	for (long long i = 0; i < N - 1; i++) {
		cin >> A[i];
	}

	for (long long i = 0; i < M; i++) {
		cin >> X[i];
		cin >> Y[i];
	}

	for (long long i = 0; i < N - 1; i++) {
		T -= A[i];
		if (T <= 0) {
			flag = false;
			break;
		}
		if (num < M) {
			if (i + 1 == X[num] - 1) {
				T += Y[num];
				num++;
			}
		}
	}

	if (flag) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
