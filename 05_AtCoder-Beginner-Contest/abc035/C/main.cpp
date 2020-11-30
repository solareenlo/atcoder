#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, q;
	cin >> n >> q;
	vector<int> o(n + 2, 0);
	REP(i, q) {
		int l, r;
		cin >> l >> r;
		o[l - 1]++;
		o[r]--;
	}
	REP(i, n) o[i + 1] += o[i];
	REP(i, n)
		cout << o[i] % 2;
	cout << '\n';
    return 0;
}
