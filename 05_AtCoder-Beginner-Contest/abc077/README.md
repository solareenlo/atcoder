# [AtCoder Beginner Contest 077](https://atcoder.jp/contests/abc077)

## [C - Snuke Festival](https://atcoder.jp/contests/abc077/tasks/arc084_a)
- `A_i < B_j < C_k` となる組 `(i, j, k)` の個数を求める問題．
- 愚直にループを回すと TLE になるので，`j` を基準にして考える．
- まずは，A, B, C をソートする．
- `i` の個数は，
	- `auto itr = N - lower_bound(a.begin(), a.end(), b[i]);`
	- `i` の個数 = `distance(a.begin(), itr)`
	- を使って求める．
- `k` の個数は，
	- `auto itr = upper_bound(c.begin(), c.end(), b[i]);`
	- `k` の個数 = `distance(itr, c.end)`
	- を使って求める．
- `lower_bound` は以上．
- `upper_bound` はより大きい．
