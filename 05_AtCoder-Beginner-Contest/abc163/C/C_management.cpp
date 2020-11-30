#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int N;
	cin >> N;
	int A[N + 1];
	int boss;
	for (int i = 1; i <= N; i++)
		A[i] = 0;
	for (int i = 1; i < N; i++) {
		cin >> boss;
		A[boss]++;
	}
	for (int i = 1; i <= N; i++)
		cout << A[i] << endl;
	return 0;
}
