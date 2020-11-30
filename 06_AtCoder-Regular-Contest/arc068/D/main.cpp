#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int N; cin >> N;
	set<int> a;
	REP(i, N) {
		int tmp; cin >> tmp;
		a.insert(tmp);
	}
	int n = a.size();
	cout << ((n % 2) ? n : n-1) << '\n';
    return 0;
}
