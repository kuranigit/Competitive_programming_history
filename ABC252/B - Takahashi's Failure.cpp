#include<bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	int max = 0;
	int count = 0;
	bool flag = true;
	int teki = 0;
	cin >> N >> K;
	vector<int>food;
	vector<int>dislike;
	vector<int>num;
	for (int i = 0; i < N; i++) {
		cin >> teki;
		food.push_back(teki);
	}
	for (int i = 0; i < K; i++) {
		cin >> teki;
		dislike.push_back(teki);
	}
	vector<int>copi(food.size());
	copy(food.begin(), food.end(), copi.begin());
	sort(food.begin(), food.end(), greater<int>());

	for (int i = 0; i < N; i++) {
		if (copi[i] == food[0]) {
			num.push_back(i + 1);
			count++;
		}
	}

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < K; j++) {
			if (num[i] == dislike[j]) {
				flag = false;
				break;
			}
		}
	}
	if (flag)
		cout << "No";
	else
		cout << "Yes";

}
