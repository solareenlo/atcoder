# [AtCoder Grand Contest 008](https://atcoder.jp/contests/agc008/tasks)

## [A - Simple Calculator](https://atcoder.jp/contests/agc008/tasks/agc008_a)
- 最短の操作列は
    - `(B を 0 or 1 回押す) -> (A を 0 回以上押す) -> (B を 0 or 1 回押す)`
- ので，「最初に B を押す/押さない」と「最後に B を押す/押さない」の組合せを計4通り試す．
    - 「最初に B を押す」場合，x の符号を反転させる．
    - 「最後に B を押す」場合，y の符号を反転させる．
- このようにして求めた操作回数のうち最小値が答えとなる．
