#include<bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;

long long mod(long long val, long long m) {
	long long res = val % m;
	if (res < 0) res += m;
	return res;
}

int main() {
	long long N;
	cin >> N;
	for (long long i = 0; i < MOD; i++) {
		if ((mod(N, MOD) - mod(i, MOD)) % MOD == 0) {
			cout << i;
			return 0;
		}
	}



}

