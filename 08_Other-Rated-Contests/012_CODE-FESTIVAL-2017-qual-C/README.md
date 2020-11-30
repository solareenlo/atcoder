# [CODE FESTIVAL 2017 qual C](https://atcoder.jp/contests/code-festival-2017-qualc)

## [C - Inserting 'x'](https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_c)
- 以下の操作を繰り返し，x を追加した回数が答え．
	- s の先頭文字と末尾文字が同じ場合
		- s から先頭文字と末尾文字を取り除く
	- s の先頭文字と末尾文字が異なる場合
		- s の先頭文字が x である場合，s の末尾へ x を追加する
		- s の末尾文字が x である場合，s の先頭へ x を追加する
		- s の先頭文字も末尾文字も x で無い場合，答えは -1

## [B - Similar Arrays](https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_b)
- `答え = pow(3, n) - 全部が奇数になる個数 = 全ての積が偶数になる`
- `全部が奇数になる個数 = pow(2, 偶数の個数)`
    - 偶数の両脇は奇数だから
- 元の数全てが奇数の時は，`-1` しないといけいないけど，ちょうど `pow(2, 0) = 1` になるので，
    ```bash
    答え = pow(3, n) - 全部が奇数になる個数
         = pow(3, n) - pow(2, 偶数の個数)
         = 全ての積が偶数になる
    ```
    が成り立つ．
