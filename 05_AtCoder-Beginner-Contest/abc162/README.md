# [AtCoder Beginner Contest 162](https://atcoder.jp/contests/abc162/tasks)

## [D - RGB Triplets](https://atcoder.jp/contests/abc162/tasks/abc162_d)
- `j - i = k - j` を式変形して，`k = j + (j - i)` にしてから，その個数を全体の個数から引く．
- 実装上の工夫．
    - `R % 3 = 1`
    - `G % 3 = 2`
    - `B % 3 = 0`
    - を使って，R, G, B を分類できる．
