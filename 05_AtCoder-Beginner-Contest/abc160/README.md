# [AtCoder Beginner Contest 160](https://atcoder.jp/contests/abc160)

## [E - Red and Green Apples](https://atcoder.jp/contests/abc160/tasks/abc160_e)
- r[i] に C 個格納する．
- p[i] から X 個大きい方を r[i] に追加する．
- q[i] から Y 個大きい方を r[i] に追加する．
- r[i] の大きい方から X + Y 個分の合計が答え．

## [D - Line++](https://atcoder.jp/contests/abc160/tasks/abc160_d)
- パターン発見
- 点 i から 点 j までの行き方の以下の3通りの最小値の個数が答え．
	- `i → j` = `abs(i - j)`
	- `i → X → Y → j` = `abs(i - X) + 1 + abs(Y - j)`
	- `i → Y → X → j` = `abs(i - Y) + 1 + abs(X - j)`
