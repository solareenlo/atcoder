# [AtCoder Beginner Contest 108](https://atcoder.jp/contests/abc108)

## [C - Triangular Relationship](https://atcoder.jp/contests/abc108/tasks/arc102_a)
- K が奇数の時は，a, b, c を K で割った余りが 0 であれば良い．
	- ので，`答え = pow(余りが 0 の個数, 3)`．
- K が偶数の時は，a, b, c を K で割った余りが 0 か K / 2 であれば良い．
	- ので，`答え = pow(余りが 0 の個数, 3) + pow(余りが K / 2, 3)`．

