# [AtCoder Beginner Contest 086](https://atcoder.jp/contests/abc086/tasks)

## [C - Traveling](https://atcoder.jp/contests/abc086/tasks/arc089_a)
- `t` と `x + y` の偶奇は必ず一致する．
- `t => x + y` が常になる．
- `t(next) - t(now) >= abs(x(next) - x(now)) + abs(y(next) - y(now))` が常に成り立つ．
- 以上3つの条件に反するものは成り立たない．
