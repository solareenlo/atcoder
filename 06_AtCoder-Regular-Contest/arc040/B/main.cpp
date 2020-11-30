#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, r; cin >> n >> r;
	string s; cin >> s;
	reverse(s.begin(), s.end());

	int cnt = 0;
	REP(i, n) {
		if (s[i] == 'o') continue ;
		if (cnt == 0) // 最後のところだけレンジが届くところまで1回で色を塗る
			cnt = max(0, (n - 1) - (i + r - 1));
		cnt++; // 最後以外は1個ずつカウントを増やす
		for (int j = i; j < i + r; j++)
			if (j < n)
				s[j] = 'o';
	}

	cout << cnt << '\n';
	return 0;
}
