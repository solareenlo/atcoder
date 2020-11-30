# [AtCoder Beginner Contest 042](https://atcoder.jp/contests/abc042)

## [C - こだわり者いろはちゃん](https://atcoder.jp/contests/abc042/tasks/arc058_a)
- N を1つずつインクリメントしながら 全探索 を行えば良い．
- 全探索 の仕方は，
	- set に取りえる数字をセットして，
	- N を1つずつインクリメントした数字の各位の数字が，取りえる数字の集合の中に全部あるかどうかを見れば良い．
