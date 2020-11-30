#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1000000007;

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int> > v(n, vector<int>(k));
	REP(i, n) REP(j, k) cin >> v[i][j];
	cout << '\n';
	int64_t res = 0;
	REP(j, k) {
		int64_t sum = n - j;
		cout <<  sum << " ";
		int tmp = v[0][j];
		REP(i, n - 1) {
			auto pos = lower_bound(v[i+1].begin(), v[i+1].end(), tmp);
			if (pos != v[i+1].end()) {
				tmp = *pos;
				cout << distance(pos, v[i+1].end()) << " ";
				sum *= distance(pos, v[i+1].end());
				sum %= MOD;
			}
			else {
				sum = 0;
				break;
			}
		}
		cout << '\n';
		if (sum == 0) break ;
		cout << "j:" << j << " sum:" << sum << '\n';
		res += sum;
		res %= MOD;
	}
	cout << res << '\n';
	return 0;
}
