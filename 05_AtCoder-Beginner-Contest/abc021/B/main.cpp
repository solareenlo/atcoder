#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	set<int> town;
	REP(i, 2) {
		int a; cin >> a;
		town.insert(a);
	}
	int k; cin >> k;
	REP(i, k) {
		int p; cin >> p;
		town.insert(p);
	}
	cout << (((int)town.size() == k+2) ? "YES" : "NO") << '\n';
	return 0;
}
