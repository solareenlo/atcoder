# [AtCoder Beginner Contest 177](https://atcoder.jp/contests/abc177)

## [E - Coprime](https://atcoder.jp/contests/abc177/tasks/abc177_e)
- 0 と全ての A[i] に対しての gcd が 1 より大きくなると，
	- 答えは `not coprime`．
- 上記を計算しつつ，A[i] の出現回数を配列に保存しておく．
- 0 と全ての A[i] に対しての gcd が 1 かつ，
	- ある数の倍数となる A[i] の出現回数が 1 より大きい場合，
	- 答えは `setwise coprime`．
- 上記の2つでは無い場合，つまり
	- 0 と全ての A[i] に対しての gcd が 1 かつ
	- ある数の倍数となる A[i] の出現回数が 1 の場合，
	- 答えは `pairwise coprime`．

## [D - Friends](https://atcoder.jp/contests/abc177/tasks/abc177_d)
- Union-Find を使って，グループ分けした時のグループの最大個数が答え．
