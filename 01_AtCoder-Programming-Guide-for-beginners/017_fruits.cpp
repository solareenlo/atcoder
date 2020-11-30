#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int N, S;
	cin >> N >> S;
	vector<int> A(N), P(N);
	for (int i = 0; i < N; i++)
		cin >> A.at(i);
	for (int i = 0; i < N; i++)
		cin >> P.at(i);
	int count = 0;
	for (int j = 0; j < N; j++)
		for (int i = 0; i < N; i++)
			if (A.at(j) + P.at(i) == S)
				count += 1;
	cout << count << endl;
	return 0;
}
