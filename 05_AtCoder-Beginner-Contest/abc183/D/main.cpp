#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const int MAXI = 200005;

ll N[MAXI];
ll s[MAXI+1];

int main() {
	int	n; cin >> n;
	ll w; cin >> w;
	REP(i, n) {
		int s, t, p; cin >> s >> t >> p;
		N[s] += p;
		N[t] -= p;
	}
	REP(i, MAXI)
		s[i+1] = s[i] + N[i];
	cout << ((w >= *max_element(s, s+MAXI)) ? "Yes" : "No") << '\n';
    return 0;
}
