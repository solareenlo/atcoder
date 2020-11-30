#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

bool check(set<int> s, int n) {
	while (n > 0) {
		if (!s.count(n % 10))
			return true;
		n /= 10;
	}
	return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	set<int> d = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	REP(i, k) {
		int tmp;
		cin >> tmp;
		d.erase(tmp);
	}

	while (check(d, n)) {
		n++;
	}

	cout << n << '\n';
    return 0;
}
