#include <bits/stdc++.h>
using namespace std;

int main() {
	int k; cin >> k;
	int res = 0;
	for (int i=1; i<=k; i++)
		for (int j=1; i*j<=k; j++)
			res += k/i/j;
	cout << res << '\n';
    return 0;
}
