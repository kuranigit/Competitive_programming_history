#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (b == a + 1) {
		cout << "Yes";
	}
	else if (b == 10 && a == 1)
	{
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}