#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main() {
	int K, N, M; cin >> K >> N >> M;
	ll A[K]; REP(i, K) cin >> A[i];
	pair<ll, ll> P[K];
	ll B[K], sum = 0;
	REP(i, K) {
		B[i] = (ll)M * A[i] / N;
		P[i].first = (ll)N * B[i] - M * A[i];
		P[i].second = i;
		sum += B[i];
	}
	sort(P, P+K);
	REP(i, M - sum) B[P[i].second]++;
	REP(i, K) cout << B[i] << " ";
	return 0;
}
