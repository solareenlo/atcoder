#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	set<int> a, b, uni, inter, diff;
	REP(i, n) {
		int A; cin >> A;
		a.insert(A);
	}
	REP(i, m) {
		int B; cin >> B;
		b.insert(B);
	}
	set_union(a.begin(), a.end(),
			b.begin(), b.end(),
			inserter(uni, uni.end()));
	set_intersection(a.begin(), a.end(),
			b.begin(), b.end(),
			inserter(inter, inter.end()));
	set_difference(uni.begin(), uni.end(),
			inter.begin(), inter.end(),
			inserter(diff, diff.end()));
	for (int x : diff) cout << x << ' ';
	return 0;
}
