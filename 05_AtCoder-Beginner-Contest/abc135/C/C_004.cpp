#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+1];
	REP(i, n+1) cin >> a[i];
	int c = 0;
	int res = 0;
	REP(i, n) {
		int b; cin >> b;
		res = min(b, a[i]+a[i+1]);
		c += res;
		a[i+1] -= res - min(b, a[i]);
	}
	cout << res << '\n';
	return 0;
}
