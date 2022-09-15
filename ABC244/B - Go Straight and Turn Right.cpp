#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	int x = 0;
	int y = 0;
	int num = 1;
	string s1;
	cin >> N >> s1;
	for (int i = 0; i < N; i++) {
		if (s1[i] == 'S') {
			if (num == 1) {
				x++;
			}
			else if (num == 2) {
				y--;
			}
			else if (num == 3) {
				x--;
			}
			else {
				y++;
			}
		}
		else {
			num++;
			if (num == 5) {
				num = 1;
			}
		}
	}
	cout << x << " " << y;
}