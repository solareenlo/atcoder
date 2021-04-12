#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int c[100010], cnt[100010], good[100010];
vector<int> e[100010];

void dfs(int now, int p = -1) {
	if (cnt[c[now]] == 0)
		good[now] = true;
	cnt[c[now]]++;
	for (auto to : e[now]) if (to != p)
		dfs(to, now);
	cnt[c[now]]--;
}

int main() {
	int n; cin >> n;
	REP(i, n) cin >> c[i];
	REP(i, n-1) {
		int a, b; cin >> a >> b;
		e[--a].push_back(--b);
		e[b].push_back(a);
	}
	dfs(0);
	REP(i, n) if (good[i])
		cout << i+1 << '\n';
    return 0;
}
