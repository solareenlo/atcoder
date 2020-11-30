# [AtCoder Beginner Contest 178](https://atcoder.jp/contests/abc178)

# [E - Dist Max](https://atcoder.jp/contests/abc178/tasks/abc178_e)
- マンハッタン距離 の 2点間の最大距離 の公式は
	```sh
	max(maxP - minP, maxS - minS)
	maxP = max(x[i] + y[i])
	minP = min(x[i] + y[i])
	maxS = max(x[i] - y[i])
	minS = min(x[i] - y[i])
	```
- 以下の 絶対値の式変換 (45度回転) を使用している．
	```sh
	|x[i]-x[j]| + |y[j]-y[j]|
	= max(x[i]-x[j], x[j]-x[i]) + max(y[i]-y[j], y[j]-y[i])
	= max((x[i]-x[j])+(y[i]-y[j]), (x[i]-x[j])+(y[j]-y[i]), (x[j]-x[i])+(y[i]-y[j]), (x[j]-x[i])+(y[j]-y[i]))
	= max(x[i]+y[i]-(x[j]+y[j]), x[i]-y[i]-(x[j]-y[j]), -(x[i]-y[i])+(x[j]-y[j]), -(x[i]+y[i])+(x[j]+y[j]))
	= max(|x[i]+y[i]-(x[j]+y[j])|, |x[i]-y[i]-(x[j]-y[j])|)
	```
	`P[i] = x[i] + y[i]`
	`S[i] = x[i] - y[i]`
	とすると，上式は
	```sh
	|x[i]-x[j]| + |y[i]-y[j]| = max(|P[i]-P[j]|, |S[i]-S[j]|)
	```
	となる．

# [D - Redistribution](https://atcoder.jp/contests/abc178/tasks/abc178_d)
- パターン発見
	```sh
	S[i] = S[i-2] + S[i-3] + S[i-4]
	or
	S[i] = S[i-1] + S[i-3]
	```
	になっている．

## [C - Ubiquity](https://atcoder.jp/contests/abc178/tasks/abc178_c)
- ベン図 を考える問題．
- 全体は
	`pow(10, N)` 通り
- `A[i] = 0` なる `i` が存在しない通りは
	`pow(9, N)` 通り
- `A[i] = 9` なる `i` が存在しない通りは
	`pow(9, N)` 通り
- `A[i] = 0` なる `i` と `A[i] = 9` なる `i` がともに存在しない通りは
	`pow(8, N)` 通り
- `A[i] = 0` なる `i` と `A[i] = 9` なる `i` のどちらか一方しか存在しない通りは
	`pow(9, N) + pow(9, N) - pow(8, N)` 通り
- よって，答えとなる
- `A[i] = 0` なる `i` と `A[i] = 9` なる `i` がともに存在する通りは
	`pow(10, N) - pow(9, N) - pow(9, N) + pow(8, N)` 通り
