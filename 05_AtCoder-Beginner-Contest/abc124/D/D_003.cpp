#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int N, k; cin >> N >> k;
	string s; cin >> s;
	vector<int> nums;
	int now = 1; // 今見ている数
	int cnt = 0; // now がいくつ並んでいるか
	REP(i, N) {
		if (s[i] == (char)('0' + now)) cnt++;
		else {
			nums.push_back(cnt);
			now = 1 - now; // 0 と 1 を切り替える時の計算
			cnt = 1; // 新しい数をカウントし始める
		}
	}
	if (cnt) nums.push_back(cnt);
	// 1-0-1-0-1-0-1 みたいに 1 で始まって 1 で終わる配列が欲しいので，
	// 1-0-1-0-1-0 みたいな感じで終わってたら，適当に1つ足す
	if (nums.size() % 2 == 0) nums.push_back(0);
	int n = nums.size();
	int add = 2 * k + 1;
	int res = 0;
	// 1. ループの外側に尺取り法の左と右を持っておく
	int l = 0, r = 0;
	int tmp = 0; // [l, r) の sum
	// 1-0-1-0-1-0-1 の 1 から始めるので，偶数番目だけ見る
	for (int i = 0; i < n; i += 2) {
		// 2. 尺取り法の次の左と右を設定する
		int nl = i;
		int nr = min(i + add, n);
		// 3. 左端を移動する
		while (nl > l) tmp -= nums[l++];
		// 3. 右端を移動する
		while (nr > r) tmp += nums[r++];
		res = max(res, tmp);
	}
	cout << res << '\n';
	return 0;
}
