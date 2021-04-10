#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n; cin >> n;
	int64_t t = sqrtl(n*2);
	cout << (t*(t+1)/2 == n ? t : -1) << '\n';
	return 0;
}
