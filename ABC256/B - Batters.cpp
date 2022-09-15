#include<bits/stdc++.h>
using namespace std;


int main() {
	int N;
	int point = 0;
	cin >> N;
	int A[100];
	int B[100];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		B[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i <= j) {
				B[i] += A[j];
			}
		}
		if (B[i] >= 4) {
			point++;
		}
	}
	cout << point;

}
