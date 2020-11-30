#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(false);
	int n; cin >> n;
	int maxP, minP, maxS, minS;
	maxP = maxS = INT_MIN;
	minP = minS = INT_MAX;
	while (n--) {
		int x, y; cin >> x >> y;
		maxP = max(maxP, x + y);
		minP = min(minP, x + y);
		maxS = max(maxS, x - y);
		minS = min(minS, x - y);
	}
	cout << max(maxP - minP, maxS - minS) << '\n';
    return 0;
}
