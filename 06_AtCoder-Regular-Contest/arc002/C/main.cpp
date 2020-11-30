#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const vector<string> c = {"A", "B", "X", "Y"};

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string s; cin >> s;

	int res = n;
	REP(i, 4) REP(j, 4) REP(a, 4) REP(b, 4) {
		string L;
		L = c[i] + c[j];
		string R;
		R = c[a] + c[b];
		int cnt = 0;
		for (int k = 0; k < n; k++, cnt++) {
			string sub = s.substr(k, 2);
			if (k != n - 1 && (sub == L || sub == R)) {
				k++;
			}
		}
		res = min(res, cnt);
	}

	cout << res << '\n';
    return 0;
}
