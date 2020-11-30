#include "bits/stdc++.h"
using namespace std;

int sum_range(int a, int b) {
	if (a == b)
		return a;
	return sum_range(a, b - 1) + b;
}

int main(void) {
	int A, B;
	cin >> A >> B;
	cout << sum_range(A, B) << endl;
	return 0;
}
