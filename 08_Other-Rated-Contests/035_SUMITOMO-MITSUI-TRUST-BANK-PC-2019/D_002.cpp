#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;

	int cnt = 0;
	// 000 ~ 999 を 決め打ち して 全探索
	REP(i, 10) {
		auto posA = find(s.begin(), s.end(), i + '0');
		if (posA != s.end()) {
			REP(j, 10) {
				auto posB = find(posA+1, s.end(), j + '0');
				if (posB != s.end()) {
					REP(k, 10) {
						auto posC = find(posB+1, s.end(), k + '0');
						if (posC != s.end())
							cnt++;
					}
				}
			}
		}
	}

	cout << cnt << '\n';
	return 0;
}
