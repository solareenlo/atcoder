# [AtCoder Beginner Contest 143](https://atcoder.jp/contests/abc143/tasks)

## [D - Triangles](https://atcoder.jp/contests/abc143/tasks/abc143_d)
- `二分探索`のテクニックを用いる問題．
- 辺の長さを sort して，a, b を設定して，`b + 1` 以上，`a + b` より短い辺の長さの個数を数える．
    - `b + 1` 以上，`a + b` より短い辺の長さの個数を数える時には，`lower_bound()` を使用すると便利．
    - `lower_bound()` は，指定した要素以上の最初の要素の位置のイテレーターを返してくれる関数．
    - `a + b` を含まないので，単純に `a + b の index` - `b + 1 の index` を行えば良い．
