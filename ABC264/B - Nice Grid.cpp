#include<bits/stdc++.h>
using namespace std;

int main() {
	int R, C;
	cin >> R >> C;
	bool flag[15][15]; //•‚¾‚Á‚½‚çtrue
	for (int i = 0; i < 15; i++) {
		flag[0][i] = true;
		flag[14][i] = true;
		flag[i][0] = true;
		flag[i][14] = true;
	}

	for (int i = 1; i < 14; i++) {
		flag[1][i] = false;
		flag[13][i] = false;
		flag[i][1] = false;
		flag[i][13] = false;
	}

	for (int i = 2; i < 13; i++) {
		flag[2][i] = true;
		flag[12][i] = true;
		flag[i][2] = true;
		flag[i][12] = true;
	}

	for (int i = 3; i < 12; i++) {
		flag[3][i] = false;
		flag[11][i] = false;
		flag[i][3] = false;
		flag[i][11] = false;
	}

	for (int i = 4; i < 11; i++) {
		flag[4][i] = true;
		flag[10][i] = true;
		flag[i][4] = true;
		flag[i][10] = true;
	}

	for (int i = 5; i < 10; i++) {
		flag[5][i] = false;
		flag[9][i] = false;
		flag[i][5] = false;
		flag[i][9] = false;
	}

	for (int i = 6; i < 9; i++) {
		flag[6][i] = true;
		flag[8][i] = true;
		flag[i][6] = true;
		flag[i][8] = true;
	}

	flag[7][7] = false;

	if (flag[R - 1][C - 1]) {
		cout << "black";
	}
	else {
		cout << "white";
	}




}
