#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
	int h, w, a, b; cin >> h >> w >> a >> b;
	REP(i, h) {
		REP(j, w) {
			cout << ((i < b) ^ (j < a));
		}
		cout << '\n';
	}
	return 0;
}
