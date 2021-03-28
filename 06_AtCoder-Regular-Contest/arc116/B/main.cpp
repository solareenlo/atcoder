#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using mint=atcoder::modint998244353;

int main() {
	int n; cin >> n;
	int a[n];
	for (auto &x : a) cin >> x;
	sort(a, a+n);
	mint res=0, pre=0;
	for (int i=0; i<n; i++) {
		res+=(pre+a[i])*a[i];
		pre=2*pre+a[i];
	}
	cout << res.val() << '\n';
	return 0;
}
