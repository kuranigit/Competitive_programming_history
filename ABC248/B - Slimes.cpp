#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;


int main() {
	ll A, B, K;
	cin >> A >> B >> K;
	if (A < B) {
		for (int i = 1; true; i++) {
			A *= K;
			if (A >= B) {
				cout << i;
				break;
			}
		}
	}
	else {
		cout << 0;
	}
}