# [AtCoder Beginner Contest 175](https://atcoder.jp/contests/abc175)

## [D - Moving Piece](https://atcoder.jp/contests/abc175/tasks/abc175_d)
- ループ 1つと 尻尾 の部分だけを考え，その時の最大値を求める問題．
- ループ の部分を簡単に求める方法
```c
	vector<ll> t;
	t.push_back(score);
	for (int j = p[i]; j != i; j = p[j]) {
		score += c[j];
		t.push_back(score);
	}
	int len = t.size();
```
