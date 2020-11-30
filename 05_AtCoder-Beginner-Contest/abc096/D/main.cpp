#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
	for (int i = 2; i*i <= x; i++)
		if (x % i == 0) return false;
	return true;
}

int main() {
	int n; cin >> n;
	for (int i = 2; i <= 55555; i++) {
		if (isPrime(i) && i % 5 == 1) {
			cout << i;
			if (n != 1) cout << " ";
			n--;
		}
		if (n == 0) break ;
	}
	cout << '\n';
	return 0;
}
