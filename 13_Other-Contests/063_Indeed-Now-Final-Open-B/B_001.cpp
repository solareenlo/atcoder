#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int u[200001];
int main() {
	int n; cin >> n;
	int s[n], t[n];
	REP(i, n) {
		cin >> s[i] >> t[i];
		u[s[i]]++;
	}
	REP(i, n*2)
		u[i+1] += u[i];
	REP(i, n)
		cout << u[t[i]]-u[s[i]] << '\n';
	return 0;
}
