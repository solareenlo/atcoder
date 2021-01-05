#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

template<class T, class U>
inline int divcnt(T &num, U div) {
	int cnt = 0;
	while (num % div == 0) {
		num /= div;
		cnt++;
	}
	return cnt;
}

int main() {
	int n; cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	int cnt = 0;
	REP(i, n)
		cnt += divcnt(a[i], 2);
	cout << cnt << '\n';
	return 0;
}
