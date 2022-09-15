#include<bits/stdc++.h>
using namespace std;

int main() {
	int N, W;
	int num[305];
	int sum = 0;
	vector<int> v;
	cin >> N >> W;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < N; i++) {
		if (num[i] <= W) {
			v.push_back(num[i]);
		}
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (num[i] + num[j] <= W) {
				v.push_back(num[i] + num[j]);
			}
		}
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (num[i] + num[j] + num[k] <= W) {
					v.push_back(num[i] + num[j] + num[k]);
				}
			}
		}
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << int(v.size()) << endl;
}
