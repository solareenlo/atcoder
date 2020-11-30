# [AtCoder Beginner Contest 112](https://atcoder.jp/contests/abc112)

## [D - Partition](https://atcoder.jp/contests/abc112/tasks/abc112_d)
- `a[1]`, `a[2]`, `a[3]`, ... , `a[N]` の最大公約数を `D` とすると，
- 条件より，`M - D*N` が `D` で割り切れないといけない．
- `1 ~ M/N` の間の数 `i` で `(M - i * N) % i == 0` となるような最大の `i` を見つけると，それが答え．

## [C - Pyramid](https://atcoder.jp/contests/abc112/tasks/abc112_c)
- 101 * 101 グリッドでセンターがどこに位置するのかを 全探索 すれば良い．
- まずは，`仮の中心座標`と`与えられた座標`と`そこの高さ`から，`仮の中心の高さ`を算出する．
	- 仮の中心の高さ H = h[i] + abs(x[i] - cx) + abs(y[i] - cy)
- 次に，`仮の中心の高さ`と`与えられた座標`から`与えられた座標の仮の高さ`を算出する．
	- 与えられた座標の仮の高さ HH = H - abs(x[i] - cx) - abs(y[i] - cy)
- こうして算出した N 個の`与えられた座標の仮の高さ`が全部`与えられた座標の高さh[i]`と一致するならば，そのポイントが`中心座標`となり， そこが答え．
