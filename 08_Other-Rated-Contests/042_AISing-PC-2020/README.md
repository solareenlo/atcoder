# [エイシング プログラミング コンテスト 2020](https://atcoder.jp/contests/aising2020)

## [D - Anything Goes to Zero](https://atcoder.jp/contests/aising2020/tasks/aising2020_d)
- 割られる数が変動する分には簡単だが，割る数が変動すると挙動が変わって大変．
	- 今回の式は `f(x) = f(x % popcount(x)) + 1`
- 毎回 `popcount(x)` を求めていたら時間が足りない．
- bit が `0` から `1` に反転すると `popcount(x)` は `+1` され，
- bit が `1` から `0` に反転すると `popcount(x)` は `-1` される．
- 1回目の `popcount(x)` は別で計算して，2回目以降の `popcount(x)` は 再帰関数 で計算する．
	- なぜならば，1回目の `popcount(x)` の計算には，`O(N)` の時間がかかるから．
	- 2回目以降の `popcount(x)` の計算には，`O(logN)` の時間となり大幅に計算時間が減少するから．
