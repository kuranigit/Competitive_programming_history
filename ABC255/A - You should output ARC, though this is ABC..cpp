#include<bits/stdc++.h>
using namespace std;


int main() {
	int R, C;
	int num[2][2];
	cin >> R >> C;
	cin >> num[0][0] >> num[0][1] >> num[1][0] >> num[1][1];
	cout << num[R - 1][C - 1];
}
