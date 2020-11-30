#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int a[200000];

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int n; cin >> n;
	int mini = 0;
	REP(i, n) {
		int p; cin >> p;
		a[p]++;
		while (a[mini])
			mini++;
		cout << mini << '\n';
	}
	return 0;
}
