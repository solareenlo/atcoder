#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	int rem = n % 1000;
	if (!rem) cout << 0 << '\n';
	else cout << 1000 - rem << '\n';
    return 0;
}
