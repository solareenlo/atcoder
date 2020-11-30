# [AtCoder Petrozavodsk Contest 001](https://atcoder.jp/contests/apc001)

## [C - Vacant Seat](https://atcoder.jp/contests/apc001/tasks/apc001_c)
- 解説は Notion にあり．

## [B - Two Arrays](https://atcoder.jp/contests/apc001/tasks/apc001_b)
- 操作を1回行うと `sum(a[i])` は2増え，`sum(b[i])` は1増える．
- つまり，操作回数は `sum(b[i]) - sum(a[i])` 回となる．
- `a[i] > b[i]` の場合，少なくとも `b[i]`を `a[i] - b[i]` 回，1増やす必要がある．
- `a[i] < b[i]` の場合，少なくとも `a[i]` を `天井関数[(b[i] - a[i]) / 2]` 回，2増やす必要がある．
- この2つの式で必要最低限の1加算，2加算を計算し，それが操作回数 `sum(b[i]) - sum(a[i])` 回より多くなれば答えは `Yes` ，少なくなれば，答えは `No` になる．
