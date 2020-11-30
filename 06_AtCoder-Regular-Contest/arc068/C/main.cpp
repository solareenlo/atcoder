#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
	int n; cin >> n;
	set<int> a;
	REP(i, n) {
		int tmp; cin >> tmp;
		a.insert(tmp);
	}
	int res = a.size();
	cout << ((res % 2) ? res : res - 1) << '\n';
    return 0;
}
