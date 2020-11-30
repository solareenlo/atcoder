# [AtCoder Beginner Contest 127](https://atcoder.jp/contests/abc127)

## [D - Integer Cards](https://atcoder.jp/contests/abc127/tasks/abc127_d)
- 貪欲法
	- A[i] の小さい方から順に，C[j] の大きい方へと変換していくスタイル．
- A[i] （i <= n）を昇順にソートする．
- C[j] を B[j] 個（j <= m）繋げた配列 d[k] を降順にソートする．
- A[i] の小さい方から順に，C[j] の大きい方へと変換していく．
- 変換した後の A[i] の合計が答え．
