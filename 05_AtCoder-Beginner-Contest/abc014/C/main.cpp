#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(1000001, 0);
	REP(i, n) {
		int l, r; cin >> l >> r;
		v[l]++;
		v[r+1]--;
	}
	vector<int> s(1000002, 0);
	REP(i, 1000002)
		s[i+1] = s[i] + v[i];
	cout << *max_element(s.begin(), s.end()) << '\n';
    return 0;
}
