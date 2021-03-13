#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t	n; cin >> n;
	int64_t	res = 0;
	if (n>=1e3) res += n-1e3+1;
	if (n>=1e6) res += n-1e6+1;
	if (n>=1e9) res += n-1e9+1;
	if (n>=1e12) res += n-1e12+1;
	if (n>=1e15) res += n-1e15+1;
	cout << res << '\n';
    return 0;
}
