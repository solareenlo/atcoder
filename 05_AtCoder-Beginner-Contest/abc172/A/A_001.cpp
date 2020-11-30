#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int a;
	cin >> a;
	cout << a + pow(a, 2) + pow(a, 3) << '\n';
	return 0;
}
