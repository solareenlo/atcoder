#include <bits/stdc++.h>
using namespace std;

int N, cnt;

void dfs(int64_t n, bool a, bool b, bool c) {
	if (n > N) return ;
	if (a && b && c) cnt++;
	n *= 10;
	dfs(n+3, 1, b, c);
	dfs(n+5, a, 1, c);
	dfs(n+7, a, b, 1);
}

int main() {
	cin >> N;
	dfs(0, 0, 0, 0);
	cout << cnt << '\n';
	return 0;
}
