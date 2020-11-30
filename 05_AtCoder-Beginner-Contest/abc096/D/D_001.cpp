#include <bits/stdc++.h>
using namespace std;

template<class T>
inline bool isPrime(T n) {
	if (n < 2) return false;
	else if (n == 2) return true;
	else if (n % 2 == 0) return false;

	long double sqrtN = sqrt(n);
	for (T i = 3; i <= sqrtN; i += 2)
		if (n % i == 0) return false;
	return true;
}

int main() {
	int n; cin >> n;
	for (int i = 31; i <= 55555; i += 30) {
		if (isPrime(i) == true) {
			if (i != 31) cout << " ";
			cout << i;
			n--;
		}
		if (n == 0)
			break ;
	}
	cout << '\n';
    return 0;
}
