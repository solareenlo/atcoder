#include <bits/stdc++.h>
using namespace std;
int q[200002];
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int p; cin >> p;
		q[p+1] = q[p]+1;
	}
	cout << n - *max_element(q, q+n+2) << '\n';
	return 0;
}
