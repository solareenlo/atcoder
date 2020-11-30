# [AtCoder Beginner Contest 052](https://atcoder.jp/contests/abc052)

## [D - Walk and Teleport](https://atcoder.jp/contests/abc052/tasks/arc067_b)
- 普通に貪欲法．

## [C - Factors of Factorial](https://atcoder.jp/contests/abc052/tasks/arc067_a)
- ある数 N の正の約数の個数は，N を素因数分解した時の，それぞれの素因数の指数に1を足した数を全部乗算した数になる．
	- `N = a^n * b^m * ... (a, b は素数)`
	- と素因数分解した時の N の約数の個数は，
	- `(n + 1) * (m + 1) * ...` となる．
