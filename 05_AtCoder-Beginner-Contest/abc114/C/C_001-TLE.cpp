#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;

	int cnt = 0;
	if (n < 357) cnt = 0;
	else {
		for (int i = 357; i <= n; i += 2) {
			string s = to_string(i);
			int N = s.size();
			if (s[N-1] == '1' || s[N-1] == '9') continue ;
			bool flag3 = false;
			bool flag5 = false;
			bool flag7 = false;
			bool flag = false;
			REP(j, N) {
				if (strchr("0124689", s[j])) flag = true;
				if (s[j] == '3') flag3 = true;
				if (s[j] == '5') flag5 = true;
				if (s[j] == '7') flag7 = true;
			}
			if (!flag && flag3 && flag5 && flag7) {
				cnt++;
			}
		}
	}

	cout << cnt << '\n';
    return 0;
}
