#include<bits/stdc++.h>
using namespace std;

int main() {
	int L, R;
	cin >> L >> R;
	string num = "atcoder";
	for (int i = L - 1; i < R; i++) {
		cout << num[i];
	}
}
