#include <bits/stdc++.h>
using namespace std;
int n, a[30], res=2e9;

void dfs(int x, int s1, int s2) {
	if (x == n) {
		res = min(res, s1^s2);
		return ;
	}
	dfs(x+1, s1|a[x], s2);
	dfs(x+1, a[x], s1^s2);
}

int main() {
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	dfs(0, 0, 0);
	cout << res << '\n';
    return 0;
}
