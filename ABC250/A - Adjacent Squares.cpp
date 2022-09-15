#include<bits/stdc++.h>
using namespace std;

int main() {
	int H, W, R, C;
	int sum = 0;
	cin >> H >> W >> R >> C;
	if (1 <= (R - 1) && (R - 1) <= H) {
		sum++;
	}
	if (1 <= (R + 1) && (R + 1) <= H) {
		sum++;
	}
	if (1 <= (C - 1) && (C - 1) <= W) {
		sum++;
	}
	if (1 <= (C + 1) && (C + 1) <= W) {
		sum++;
	}
	cout << sum;
}