#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n+1);
	int64_t sum1 = 0;
	REP(i, n+1) {
		cin >> a[i];
		sum1 += a[i];
	}
	REP(i, n) {
		int b; cin >> b;
		int diff = b - a[i];
		if (diff >= 0) {
			a[i] = 0;
			if (a[i+1] >= diff) a[i+1] -= diff;
			else a[i+1] = 0;
		} else {
			a[i] -= b;
		}
	}
	int64_t sum2 = 0;
	REP(i, n+1) sum2 += a[i];
	cout << sum1 - sum2 << '\n';
	return 0;
}
