#include <bits/stdc++.h>
using namespace std;

inline int cal(int x) {
	int res = 0;
	while (x % 100 == 0) {
		x /= 100;
		res++;
	}
	return res;
}

int main() {
	int d, n; cin >> d >> n;
	int cnt = 0, x = 0;
	while (cnt < n)
		if(cal(++x) == d) cnt++;
	cout << x << '\n';
	return 0;
}
