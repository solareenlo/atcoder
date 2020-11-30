# [AtCoder Beginner Contest 028](https://atcoder.jp/contests/abc028/tasks)

## [D - 乱数生成](https://atcoder.jp/contests/abc028/tasks/abc028_d)
- K が0回出力された場合 = `0` 通り
- K が1回出力された場合 = `(K - 1) * 1 * (N - K) * 6` 通り
- K が2回出力された場合 = `1 * 1 * (N - 1) * 3` 通り
- K が3回出力された場合 = `1 * 1 * 1` 通り
- の4通りの和を，`N^3` で割れば良い．

## [C - 数を3つ選ぶマン](https://atcoder.jp/contests/abc028/tasks/abc028_c)
- `A + D + E` と `B + C + D` のどちらか大きい方が答え．
