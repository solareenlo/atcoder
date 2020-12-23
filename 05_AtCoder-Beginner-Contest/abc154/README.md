# [AtCoder Beginner Contest 154](https://atcoder.jp/contests/abc154)

## [D - Dice in Line](https://atcoder.jp/contests/abc154/tasks/abc154_d)
- 期待値は `(1 + p) / 2.0` で計算できるので，あらかじめ計算しておく．
- 愚直に計算すると TLE になるので，累積和か queue を用いて計算する．
- 累積和とは，始めからそこまでの合計値を数列として持っておいて，必要な部分の和は合計値の数列の引き算を行えば良い．
- queue は，必要な個数の期待値を queue に取り込んでから，期待値の合計値を計算し，front を引いてから，front を1つ pop して，次の期待値を1つ push して，を繰り返して，期待値の合計値を計算する．
