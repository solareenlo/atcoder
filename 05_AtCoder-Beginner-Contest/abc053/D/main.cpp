#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int N; cin >> N;
	set<int> a;
	REP(i, N) {
		int tmp;
		cin >> tmp;
		a.insert(tmp);
	}

	int n = a.size();
	if (n % 2) cout << n << '\n';
	else cout << n - 1 << '\n';
	return 0;
}
