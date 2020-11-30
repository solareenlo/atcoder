# [Tenka1 Programmer Beginner Contest](https://atcoder.jp/contests/tenka1-2018-beginner)

## [C - Align](https://atcoder.jp/contests/tenka1-2018-beginner/tasks/tenka1_2018_c)
- A[i] をソートする．
- 1回目
	- 1番大きい数と1番小さい数との差を答えに足す．
- 2回目
	- 1番小さい数と2番目に大きい数との差を答えに足す．
	- 1番大きい数と2番目に小さい数との差を答えに足す．
- 3回目
	- 2番目に小さい数と3番目に大きい数との差を答えに足す．
	- 2番目に大きい数と3番目に小さい数との差を答えに足す．
- 以上の操作を `n / 2` 回繰り返す．
- n が奇数の場合は，真ん中の数と両脇の数との差が大き方を答えに足した数が答え．
