#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
typedef long long ll;

ll K, N, M, A[(int)1e5], B[(int)1e5];

ll	check(ll x) {
	ll sumL = 0, sumR = 0;
	REP(i, K)
		sumL += max(0LL, (M * A[i] - x + N - 1) / N);
	REP(i, K)
		sumR += (M * A[i] + x) / N;
	return (sumL <= M && M <= sumR);
}

void	constructer(ll x) {
	ll R[K];
	REP(i, K)
		B[i] = max(0LL, (M * A[i] - x + N - 1) / N);
	REP(i, K)
		R[i] = (M * A[i] + x) / N;
	ll sumB = 0;
	REP(i, K) sumB += B[i];
	REP(i, K) {
		ll x = min(M - sumB, R[i] - B[i]);
		B[i] += x;
		sumB += x;
	}
}

int main() {
	cin >> K >> N >> M;
	REP(i, K)
		cin >> A[i];
	ll ng = -1, ok = N * M;
	while (ng + 1 < ok) {
		ll x = (ng + ok) / 2;
		if (check(x))
			ok = x;
		else
			ng = x;
	}
	constructer(ok);
	REP(i, K)
		cout << B[i] << " ";
	return 0;
}
