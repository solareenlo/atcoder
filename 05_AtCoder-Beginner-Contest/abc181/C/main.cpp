#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n);
	REP(i, n) cin >> x[i] >> y[i];
	REP(i, n) for (int j = i+1; j < n; j++) for (int k = j+1; k < n; k++) {
		int dx = x[j] - x[i];
		int dy = y[j] - y[i];
		if (dx * (y[k] - y[i]) == dy * (x[k] - x[i])) {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
    return 0;
}
