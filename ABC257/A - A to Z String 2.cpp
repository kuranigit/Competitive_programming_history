#include<bits/stdc++.h>
using namespace std;


int main() {
	int N, X;
	char num[3000];
	cin >> N >> X;
	int j = 0;
	int sa = N;
	for (int i = 65; i < 91; i++) {
		while (j < N) {
			num[j] = char(i);
			j++;
		}
		N = j + sa;
	}
	cout << num[X - 1];

}
