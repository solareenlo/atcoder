#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	if (m < 0 || m > max(0, n-2))
		cout << -1 << '\n';
	else {
		cout << "1 " << 3+4*m << '\n';
		for (int i = 0; i < n-1; i++)
			cout << 2+i*4 << " " << (i+1)*4 << '\n';
	}
	return 0;
}
