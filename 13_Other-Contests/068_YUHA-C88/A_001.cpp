#include <bits/stdc++.h>
using namespace std;
string res, p, q, r;
int main() {
	int n; cin >> n;
	while (cin >> p >> q >> r) {
		if (p=="BEGINNING") res += r[0];
		if (p=="MIDDLE") res += r[r.size()/2];
		if (p=="END") res += r.back();
	}
	cout << res << '\n';
	return 0;
}
