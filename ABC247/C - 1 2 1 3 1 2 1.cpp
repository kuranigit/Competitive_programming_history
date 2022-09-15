#include<bits/stdc++.h>
using namespace std;

int main() {
	string num[16];
	int sum;
	string str;
	string a;
	num[0] = "1 ";
	for (int i = 1; i < 16; i++) {
		sum = i + 1;
		str = to_string(sum);
		num[i] += num[i - 1];
		num[i] += str;
		num[i] += " ";
		num[i] += num[i - 1];
	}
	int x;
	cin >> x;
	cout << num[x - 1];
}