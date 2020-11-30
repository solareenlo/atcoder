# [AtCoder Regular Contest 036](https://atcoder.jp/contests/arc036)

## [B - 山のデータ](https://atcoder.jp/contests/arc036/tasks/arc036_b)
- 山の高さを右から見ていったときと，増えているなら1を立てた配列 `r[i]` を用意する．
- 山の高さを左から見て行ったときに，増えているなら1を立てた配列 `l[i]` を用意する．
- `r[i] + l[i] >= 1` のところが山を形成している．
	- この山を形成している両脇は山に含まれる．
- 以上の性質を利用して山の数を数える．
