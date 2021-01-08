#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, cnt;

void dfs(ll n, bool three, bool five, bool seven) {
	if (n > N) return ;
	if (three && five && seven) cnt++;

	dfs(10 * n + 3, true, five, seven);
	dfs(10 * n + 5, three, true, seven);
	dfs(10 * n + 7, three, five, true);
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	cin >> N;
	dfs(0, false, false, false);
	cout << cnt << '\n';
	return 0;
}
