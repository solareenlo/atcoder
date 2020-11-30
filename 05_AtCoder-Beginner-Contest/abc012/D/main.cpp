#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m), t(m);
	REP(i, m) cin >> a[i] >> b[i] >> t[i];
	REP(i, m) {
		a[i]--;
		b[i]--;
	}

	vector<vector<int> > d(n, vector<int>(n, (int)1e9));

	REP(i, n) d[i][i] = 0;
	REP(i, m) d[a[i]][b[i]] = d[b[i]][a[i]] = t[i];

	// k が経由する点，i が始点，j が終点
	REP(k, n) REP(i, n) REP(j, n)
		d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	int ans = 1e9;
	REP(i, n)
		ans = min(ans, *max_element(d[i].begin(), d[i].end()));

	cout << ans << '\n';
    return 0;
}
