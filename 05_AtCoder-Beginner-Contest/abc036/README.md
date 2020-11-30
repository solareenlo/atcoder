# [AtCoder Beginner Contest 036](https://atcoder.jp/contests/abc036)

## [C - 座圧](https://atcoder.jp/contests/abc036/tasks/abc036_c)
- 座標圧縮 の問題．
- 連想配列を使うのが最も簡単．
- `map` を使うと `N <= 100000` に対しては十分高速に動作することが知られている．
- 初期化後の `map` の `value` の値の変更には，`iterator` を使う．
	```cpp
	map<int, int> m;
	REP(i, n) {
		int tmp; cin >> tmp;
		m[tmp]++; // ここは初期化
	}
	for (auto x : m)
		x.second = 10; // こっちでは，value の値は変更できない．
	for (auto itr = m.begin(); itr != m.end(); itr++)
		x->second = 10; // これで value の値を変更できる．
	```
