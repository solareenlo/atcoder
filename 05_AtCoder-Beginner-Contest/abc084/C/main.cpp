#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int N; cin >> N;
	vector<int> C(N, 0), S(N, 0), F(N, 0);
	REP(i, N - 1) cin >> C[i] >> S[i] >> F[i];

	REP(i, N - 1) {
		int res = S[i] + C[i];
		for (int j = i + 1; j < N - 1; j++) {
			if (res < S[j])
				res = S[j];
			else if (res % F[j])
				res += F[j] - (res % F[j]);
			res += C[j];
		}
		cout << res << '\n';
	}
	cout << 0 << '\n';
    return 0;
}
