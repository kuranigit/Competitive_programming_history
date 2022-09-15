#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	int N;
	cin >> N;
	ll num;
	int suma = 0;
	int sumb = 0;
	vector<ll> a;
	vector<ll> b;
	for (int i = 0; i < N; i++) {
		cin >> num;
		a.push_back(num);
	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		b.push_back(num);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i] == b[j]) {
				if (i == j) {
					suma++;
				}
				else {
					sumb++;
				}
			}
		}
	}

	cout << suma << endl << sumb;
}