# [AtCoder Regular Contest 005](https://atcoder.jp/contests/arc005)

## [B - P-CASカードと高橋君](https://atcoder.jp/contests/arc005/tasks/arc005_2)
- 座標の予想計算
- dx, dy を `R`, `L`, `U`, `D` の文字列から `dx = 0`, `dx = 1`, `dy = 0`, `dy = 1` のどれかを設定する．
- ループ文の中で next_dx, next_dy を予想計算し，
	- 予想した計算結果が0より小さく，9以上になれば，
	- dx, dy の符号を反転させて，
	- 次の数字の座標を `x += dx`, `y += dy` として計算する．
	- そうして計算した4つの数字が答え．
- 数字は文字列として受け取る．
