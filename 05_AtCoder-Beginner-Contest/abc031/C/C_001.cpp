#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	vector<P> L(n - 1);
	REP(l, n - 1) {
		vector<int> maxiT(n, -1e9);
		maxiT[l] = a[l];
		P maxiA = make_pair(-1e9, 0);
		for (int r = l + 1; r < n; r++) {
			int sumT = 0;
			int sumA = 0;
			vector<int> sub(a.begin() + l, a.begin() + r + 1);
			REP(i, (int)sub.size()) {
				if (i % 2) sumA += sub[i];
				else sumT += sub[i];
			}
			maxiT[r] = max(maxiT[r], sumT);
			if (maxiA.first < sumA) {
				maxiA.first = sumA;
				maxiA.second = r;
			}
		}
		L[l].first = maxiT[maxiA.second];
		L[l].second = maxiA.first;
		// cout << maxiT[maxiA.second] << ' ' << maxiA.first << '\n';
	}
	// cout << '\n';

	vector<P> R(n);
	for (int r = 1; r < n; r++) {
		vector<int> maxiT(n, -1e9);
		P maxiA = make_pair(-1e9, 0);
		REP(l, r) {
			vector<int> sub(a.begin() + l, a.begin() + r + 1);
			int sumT = 0;
			int sumA = 0;
			REP(i, (int)sub.size()) {
				if (i % 2) sumA += sub[i];
				else sumT += sub[i];
			}
			maxiT[l] = max(maxiT[l], sumT);
			if (maxiA.first < sumA) {
				maxiA.first = sumA;
				maxiA.second = l;
			}
		}
		R[r].first = maxiT[maxiA.second];
		R[r].second = maxiA.first;
		// cout << maxiT[maxiA.second] << ' ' << maxiA.first << '\n';
	}

	int res = -1e9;
	REP(i, n) {
		if (i == 0) res = max(res, L[i].first);
		else if (i == n - 1) res = max(res, R[i].first);
		else {
			if (L[i].second == R[i].second) res = max(res, max(R[i].first, L[i].first));
			else if (L[i].second < R[i].second) res = max(res, R[i].first);
			else res = max(res, L[i].first);
		}
	}

	cout << res << '\n';
    return 0;
}
