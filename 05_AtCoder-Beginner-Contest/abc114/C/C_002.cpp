#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, ret;

void dfs(ll num, bool three, bool five, bool seven) {
	if (num > n) return ;
	if (three && five && seven) ret++;

	dfs(10 * num + 3, true, five, seven);
	dfs(10 * num + 5, three, true, seven);
	dfs(10 * num + 7, three, five, true);
	return ;
}

int main() {
	cin >> n;
	dfs(0, false, false, false);
	cout << ret << '\n';
	return 0;
}
