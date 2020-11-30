# [AtCoder Beginner Contest 170](https://atcoder.jp/contests/abc170)

## [D - Not Divisible](https://atcoder.jp/contests/abc170/tasks/abc170_d)
- エラトステネスの揮の操作を応用した問題．
- エラトステネスの揮の操作を応用して，その数の倍数の個数をインクリメントしていけば良い．
    - そして，倍数の個数が1個の数の総数が答え．
- vector の要素が別の vector の添字になるときには，
    - `for (auto x : vec) tmp[x]++;`
    - のように書くとコードを短くかける．

## [C - Forbidden List](https://atcoder.jp/contests/abc170/tasks/abc170_c)
- ある値が同じ時の，その値に対するインデックスの大小を比較したい場合には，
    - `pair<int, int> tmp;` に対する `min, max` を使えば，
    - `tmp.first` が同じ場合には，
    - `tmp.second` の値で大小関係を比較してくれる．
