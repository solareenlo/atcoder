#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, d, k;
	cin >> n >> d >> k;
	vector<int> l(d), r(d);
	REP(i, d) cin >> l[i] >> r[i];
	vector<int> s(k), t(k);
	REP(i, k) cin >> s[i] >> t[i];

	REP(i, k) {
		int ans = -1;
		REP(j, d) {
			if (s[i] >= l[j] && s[i] <= r[j]) {
				if (t[i] >= l[j] && t[i] <= r[j])
					s[i] = t[i];
				else {
					if (s[i] < t[i]) s[i] = r[j];
					else s[i] = l[j];
				}
			}
			if (s[i] == t[i]) {
				ans = j + 1;
				break ;
			}
		}
		cout << ans << '\n';
	}
    return 0;
}
