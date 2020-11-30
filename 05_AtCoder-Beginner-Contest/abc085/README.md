# [AtCoder Beginner Contest 085](https://atcoder.jp/contests/abc085/tasks)

## [D - Katana Thrower](https://atcoder.jp/contests/abc085/tasks/abc085_d)
- lower_bound を使う問題．
- B の中で「A の最大値以上の数」を大きい方からどんどん H から引いていく．
	- そこで H が0以下になった個数が答え．
	- 全部引いて H が0以下にならなかったら，
	- H から A の最大値をどんどん引いていき，
	- H が0以下になった個数が答え．

## [C - Otoshidama](https://atcoder.jp/contests/abc085/tasks/abc085_c)
- 3重ループにならないように，
- 最後のループを `お札の総数 - １万円の枚数 - 5千円の枚数 = 千円の枚数` を利用した if 文に置き換える問題．
