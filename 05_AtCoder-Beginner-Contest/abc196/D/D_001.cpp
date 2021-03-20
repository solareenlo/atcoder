#include <bits/stdc++.h>
using namespace std;

int H, W, res;
void dfs(int i, int bit, int a, int b) {
	if (i==H*W) return (void)res++;
	if (bit&1<<i) return dfs(i+1, bit, a, b);
	if (b) dfs(i+1, bit | 1<<i, a, b-1);
	if (a) {
		if (i%W!=W-1 && ~bit&1<<(i+1))
			dfs(i+1, bit | 1<<i | 1<<(i+1), a-1, b);
		if (i+W<H*W)
			dfs(i+1, bit | 1<<i | 1<<(i+W), a-1, b);
	}
}

int main() {
	int a, b; cin >> H >> W >> a >> b;
	dfs(0, 0, a, b);
	cout << res << '\n';
    return 0;
}
