# [AtCoder Beginner Contest 084](https://atcoder.jp/contests/abc084)

## [D - 2017-like Number](https://atcoder.jp/contests/abc084/tasks/abc084_d)
- 100000 までの素数を エラトステネスの揮 を用いて（早い！）列挙して，
- `N` も `(N + 1) / 2` も素数であるような数のところでフラグを立てて，
- 上記のような数の個数で 累積和 を求めて，
- `累積和 の vector[r] - 累積和 の vector[l - 1]` が答え．
- 添字に気を付ける！

## [C - Special Trains](https://atcoder.jp/contests/abc084/tasks/abc084_c)
- パターン発見, 貪欲法.
- 最短で乗ることのできる列車にどんどん乗っていくと答え．
