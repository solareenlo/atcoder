#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, r; cin >> n >> r;
	string s; cin >> s;

	int cnt = 0;
	REP(i, n) {
		bool target = false;
		for (int j = i; j < i + r; j++) {
			if (s[j] == '.')
				target = true;
		}
		if (target) {
			for (int j = i; j < i + r; j++) {
				if (j < n)
					s[j] = 'o';
			}
			cnt++;
		}
		int point = 0;
		for (int j = i; j < n; j++) {
			if (s[j] == '.') {
				for (int k = j; k < j + r; k++) {
					if (s[k] == '.')
						point = k;
				}
				if (point)
					point -= r - 1;
				break ;
			}
		}
		if (point > i) {
			cnt += point - i;
			i = point - 1;
		}
	}
	cout << cnt << '\n';
    return 0;
}
