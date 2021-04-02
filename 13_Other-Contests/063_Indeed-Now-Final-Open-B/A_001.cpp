#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int main() {
	int64_t a, b; cin >> a >> b;
	int64_t res = 0;
	for (int64_t i=a; i<=b; i++)
		(res+=i*i*(i+1)/2)%=MOD;
	cout << res << '\n';
	return 0;
}
