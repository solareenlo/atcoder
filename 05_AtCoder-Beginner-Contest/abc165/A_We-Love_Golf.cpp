#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int K;
	cin >> K;
	int A, B;
	cin >> A >> B;

	string dist = "NG";
	for (int i = A; i <= B; i++) {
		if (i % K == 0) {
			dist = "OK";
			break ;
		}
	}
	cout << dist << endl;
	return 0;
}
