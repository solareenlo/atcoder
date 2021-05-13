#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int64_t A[100000], sum, a, are[100000];
int main() {
	int K, N, M; cin >> K >> N >> M;
	REP(i, K) {
		cin >> a;
		a *= M;
		A[i] = a / N;
		are[i] = (a - A[i] * N) << 32 | i;
		sum += A[i];
	}
	nth_element(are, are + K - M + sum, are + K);
	for(int i = K - 1; i >= K - M + sum; i--) A[are[i] & (1 << 20) - 1]++;
	REP(i, K) cout << A[i] << " ";
	return 0;
}
