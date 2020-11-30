# [AtCoder Regular Contest 041](https://atcoder.jp/contests/arc041)

## [B - アメーバ](https://atcoder.jp/contests/arc041/tasks/arc041_b)
- 上下左右
- パターン発見
- 1行目から順番に見て行って，あるマス `(x, y)` の数字 `n` は，直ぐ下のマス `(x, y+1)` の元の数字から来ていることが分かる．
	- ので，答えの配列の `(x, y+1)` には，`n` を書き込む．
	- そして，元の盤面の `(x, y+1)` の上下左右の数字から `n` を引く．
	- これを繰り返して行ったものが答え．
