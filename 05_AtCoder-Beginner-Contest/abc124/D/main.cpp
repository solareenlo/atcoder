#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int N, k; cin >> N >> k;
	string s; cin >> s;
	vector<int> nums;
	int now = 1;
	int cnt = 0;
	REP(i, N) {
		if (s[i] == (char)('0' + now)) cnt++;
		else {
			nums.push_back(cnt);
			now = 1 - now;
			cnt = 1;
		}
	}
	if (cnt) nums.push_back(cnt);
	if (nums.size() % 2 == 0) nums.push_back(0);
	int n = nums.size();
	int add = 2 * k + 1;
	int res = 0;
	vector<int> sum(n + 1, 0);
	REP(i, n) sum[i + 1] = sum[i] + nums[i];
	for (int i = 0; i < n; i += 2) {
		int l = i;
		int r = min(i + add, n);
		int tmp = sum[r] - sum[l];
		res = max(res, tmp);
	}
	cout << res << '\n';
	return 0;
}
