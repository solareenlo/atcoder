#include "bits/stdc++.h"
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0)
		return(b);
	else
		return(gcd(b, a % b));
}

int main(void) {
	int K;
	int sum = 0;
	cin >> K;
	for (int k = 1; k <= K; k++)
		for (int j = 1; j <= K; j++)
			for (int i = 1; i <= K; i++)
				sum += gcd(gcd(i, j), k);
	cout << sum << endl;
	return 0;
}
