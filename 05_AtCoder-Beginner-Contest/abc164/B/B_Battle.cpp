#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	while (1) {
		C -= B;
		if (C <= 0) {
			cout << "Yes" << endl;
			break ;
		}
		A -= D;
		if (A <= 0) {
			cout << "No" << endl;
			break ;
		}
	}
	return 0;
}
