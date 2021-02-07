#include <bits/stdc++.h>
using namespace std;

int main() {
	int v, t, s, d; cin >> v >> t >> s >> d;
	double dv = (double)d/v;
	cout << ((dv < t || s < dv) ? "Yes" : "No") << '\n';
    return 0;
}
