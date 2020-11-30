#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int ab[10][10];

int main() {
	int N; cin >> N;
	REP(i, N) {
		string s = to_string(i + 1);
		ab[s.front() - '0'][s.back() - '0']++;
	}
	int res = 0;
	REP(i, 10) REP(j, 10)
		res += ab[i][j] * ab[j][i];
	cout << res << '\n';
    return 0;
}
