#include <iostream>
using namespace std;

int main() {
	int n, m, s; cin >> n >> m >> s;
	int p[10000] = {};
	while (n--) {
		int t, k; cin >> t >> k;
		p[t] = k;
	}
	int res = 0, q = 0;
	for (int i=0; i<s; i++) {
		q = i ? q + p[i] : 0;
		res += q < m ? 0 : 1;
	}
	cout << res << '\n';
	return 0;
}
