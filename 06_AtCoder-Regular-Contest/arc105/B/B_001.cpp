#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

template<class T>
inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	int g = a[0];
	REP(i, n) g = gcd(g, a[i]);
	cout << g << '\n';
    return 0;
}
