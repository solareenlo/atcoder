#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> m;
	REP(i, n) {
		cin >> a[i];
		m[a[i]]++;
	}
	int i = 0;
	for (auto itr = m.begin(); itr != m.end(); itr++)
		itr->second = i++;
	REP(i, n)
		cout << m[a[i]] << '\n';
	return (0);
}
