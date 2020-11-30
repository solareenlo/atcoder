#include "bits/stdc++.h"
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int mini;
	int maxi;
	mini = min(A, B);
	mini = min(mini, C);
	maxi = max(A, B);
	maxi = max(maxi, C);
	cout <<  maxi - mini << endl;
	return 0;
}
