#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	string S, T; cin >> S >> T;
	int n = S.size();

	vector<char> cntS(26, 0), cntT(26, 0);
	REP(i, n) {
		cntS[S[i]-'a']++;
		cntT[T[i]-'a']++;
		if (cntS[S[i]-'a'] != cntT[T[i]-'a']) {
			cout << "No" << '\n';
			return 0;
		}
	}

	cout << "Yes" << '\n';
	return 0;
}
