#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int> > t(n, vector<int>(n));
	REP(i, n) REP(j, n) cin >> t[i][j];
	vector<int> index;
	REP(i, n) index.push_back(i);
	int res = 0;
	do {
		int	time = 0;
		REP(i, n) time += t[index[i]][index[(i+1)%n]];
		if (time == k) res++;
	} while (next_permutation(index.begin() + 1, index.end()));
	cout << res << '\n';
    return 0;
}
