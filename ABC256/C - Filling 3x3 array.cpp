#include<bits/stdc++.h>
using namespace std;


int main() {
	int num[3][3];
	int sum = 0;
	int h1, h2, h3, w1, w2, w3;
	cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
	for (int i = 1; i <= 30; i++) {
		for (int j = 1; j <= 30; j++) {
			for (int k = 1; k <= 30; k++) {
				for (int l = 1; l <= 30; l++) {
					if (h1 - i - j > 0 && h2 - k - l > 0 && w1 - i - k > 0 && w2 - j - l > 0) {
						num[0][0] = i;
						num[0][1] = j;
						num[0][2] = h1 - i - j;
						num[1][0] = k;
						num[1][1] = l;
						num[1][2] = h2 - k - l;
						num[2][0] = w1 - i - k;
						num[2][1] = w2 - j - l;
						if (w3 - num[0][2] - num[1][2] > 0 && h3 - num[2][0] - num[2][1] > 0 && w3 - num[0][2] - num[1][2] == h3 - num[2][0] - num[2][1]) {
							sum++;
						}
					}
				}
			}
		}
	}
	cout << sum;
}
