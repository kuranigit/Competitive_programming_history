#include<bits/stdc++.h>
using namespace std;

int main() {
	string day[5] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
	string S;
	cin >> S;
	for (int i = 0; i < 5; i++) {
		if (S == day[i]) {
			cout << 5 - i;
		}
	}

}


