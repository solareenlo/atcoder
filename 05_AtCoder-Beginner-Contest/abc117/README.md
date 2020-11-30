# [AtCoder Beginner Contest 117](https://atcoder.jp/contests/abc117/tasks)

## [C - Streamline](https://atcoder.jp/contests/abc117/tasks/abc117_c)
- 離れているところに順次コマを置けば良いので，
    - 座標をソートして，
    - 差を計算して，
    - `コマの数 - 1`個の差が大きいところを消して，
    - 差の合計を計算すれば良い．
