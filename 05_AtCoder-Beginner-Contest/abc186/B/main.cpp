#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	int mini = 100;
	int sum = 0;
	REP(i, h) REP(j, w) {
		int a; cin >> a;
		sum += a;
		mini = min(mini, a);
	}
	cout << sum - mini*h*w << '\n';
    return 0;
}
