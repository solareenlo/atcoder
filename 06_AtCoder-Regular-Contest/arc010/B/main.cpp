#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    // cin.tie(0)->sync_with_stdio(false);

	map<int, int> maxDay;
	REP(i, 12) {
		if (i == 1)
			maxDay[i] = 29;
		if (i == 3 || i == 5 || i == 8 || i == 10)
			maxDay[i] = 30;
		if (i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11)
			maxDay[i] = 31;
	}

	map<int, bool> days;
	REP(i, 366)
		days[i] = false;
	REP(i, 366)
		if (i % 7 == 0 || i % 7 == 6)
			days[i] = true;

	int n; cin >> n;
	REP(i, n) {
		int m, d;
		scanf("%d/%d", &m, &d);
		m--; d--;
		int sum = 0;
		REP(j, m)
			sum += maxDay[j];
		sum += d;
		while (days[sum] && sum < 366)
			sum++;
		if (sum < 366)
			days[sum] = true;
	}

	int sum = 0;
	int ret = 0;
	REP(i, 366) {
		if (days[i]) {
			sum++;
			ret = max(ret, sum);
		} else
			sum = 0;
	}

	cout << ret << '\n';
    return 0;
}
