# [AtCoder Beginner Contest 179](https://atcoder.jp/contests/abc179)

## [E - Sequence Sum](https://atcoder.jp/contests/abc179/tasks/abc179_e)
- A[i] の取りうる値は M 通りしかない．
- 途中からは同じ数列を繰り返している．
- 従って，以下の3通りを考える．
	- 繰り返しが始まるまでの項数とその和
	- 繰り返しの項数とその和
	- 繰り返し1周に満たない最後の部分の和

## [D - Leaping Tak](https://atcoder.jp/contests/abc179/tasks/abc179_d)
- 動的計画法をしている途中で累積和を用いる問題．
- 配る DP, 貰う DP どちらでも解法可能．
- 配る DP では，テトリス累積和を用いる．
	- 配る左端の場所 (dp[i+l[j]]) に +dp[i] をする．
	- 配る右端の場所 (dp[i+r[j]+1]) に -dp[i] をする．
- 貰う DP では，自分より前にある足されるべき範囲の合計を自分に足していく．
