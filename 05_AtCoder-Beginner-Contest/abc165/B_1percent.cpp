#include "bits/stdc++.h"
using namespace std;

int main(void) {
	long long X;
	cin >> X;
	int count = 0;
	long long deposit = 0;
	long long tmp = 100;
	while (1) {
		count++;
		deposit = tmp * 1.01;
		if (X <= deposit)
			break ;
		tmp = deposit;
	}
	cout << count << endl;
	return 0;
}
