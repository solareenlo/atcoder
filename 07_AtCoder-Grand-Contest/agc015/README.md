# [AtCoder Grand Contest 015](https://atcoder.jp/contests/agc015/tasks)

## [A - A+...+B Problem](https://atcoder.jp/contests/agc015/tasks/agc015_a)
- `(B - A + 1) + (B - A) * (N - 2) - 1` が答えになっている．
    - `(B - A + 1)`：A から B までの A, B を含む数の個数
    - `(B - A) * (N - 2) - 1`：A と B の間の数が増えた時の増えてく量．選択肢が1つ増えるごとに `B - A` ずつ増えるということ．
