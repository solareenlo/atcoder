#include <bits/stdc++.h>
using namespace std;

int64_t qpow(int64_t x, int64_t y) {
	int64_t ret = 1;
	while(y) {
		if(y&1ll) ret = ret*x;
		y >>= 1ll;
		x = x*x;
	}
	return ret;
}

int main() {
	int q; cin >> q;
	while (q--) {
		int64_t n; cin >> n;
		int64_t r = ceil((sqrt(2*n-1)-1)/2.0);
		int64_t a = 2*r*(r+1)+1;
		int64_t x = r-(a-n+1)/2;
		int64_t y = qpow(-1, a-n+1)*(r-abs(x));
		cout << x << " " << y << '\n';
	}
	return 0;
}
