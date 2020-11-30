#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int h, w, a, b; cin >> h >> w >> a >> b;
	REP(i, h) {
		REP(j, w) {
			if ((i < b && j < a) || (i >= b && j >= a)) cout << 0;
			else cout << 1;
		}
		cout << '\n';
	}
    return 0;
}
