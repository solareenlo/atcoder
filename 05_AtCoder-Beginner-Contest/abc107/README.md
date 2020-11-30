# [AtCoder Beginner Contest 107](https://atcoder.jp/contests/abc107)

## [C - Candles](https://atcoder.jp/contests/abc107/tasks/arc101_a)
- 連続する K 本の蝋燭に火をつけるのが正解．
- N 本のうち連続する K 本の蝋燭を選ぶ方法は，`N - K + 1` 通りある．
- 連続する K 本の蝋燭の一番左端を `l`，一番右端を `r` とすると，
	- `l → r` の順に訪れる場合: `|x_l| + |x_r - x_l|`
	- `r → l` の順に訪れる場合: `|x_r| + |x_r - x_l|`
	- の小さい方が答えの候補の1つになる．
	- その候補の `N - K + 1` 通り全てを調べた時の最小値が答え．
