#include "bits/stdc++.h"
using namespace std;

bool has_divisor(int N, int i) {
	if (i == N)
		return false;
	if (N % i == 0)
		return true;
	return has_divisor(N, i + 1);
}

bool is_prime(int N) {
	if (N == 1)
		return false;
	else if (N == 2)
		return true;
	else
		return !has_divisor(N, 2);
}

int main(void) {
	int N;
	cin >> N;
	cout << is_prime(N) << endl;
	return 0;
}
