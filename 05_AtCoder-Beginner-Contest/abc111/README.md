# [AtCoder Beginner Contest 111](https://atcoder.jp/contests/abc111)

## [C - /\/\/\/](https://atcoder.jp/contests/abc111/tasks/arc103_a)
- 偶数番目の数列と奇数番目の数列を設ける．
- 偶数番目の最頻値と奇数番目の最頻値が違う場合は，
	- 答え = n - 偶数番目の最頻値の個数 - 奇数番目の最頻値の個数
- 偶数番目の最頻値と奇数番目の最頻値が同じ場合は，
	- 答え = min(O, E);
	- O = n - 偶数番目の最頻値の個数 - 偶数番目の最頻値の次の値の個数
	- E = n - 奇数番目の最頻値の個数 - 奇数番目の最頻値の次の値の個数
