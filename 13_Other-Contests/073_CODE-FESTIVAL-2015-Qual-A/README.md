# [CODE FESTIVAL 2015 予選A](https://atcoder.jp/contests/code-festival-2015-quala/tasks)

## [B - とても長い数列](https://atcoder.jp/contests/code-festival-2015-quala/tasks/codefestival_2015_qualA_b)
- 動的計画法で解ける問題．
    - `dp[i] = i 回目の操作後の S の要素の和`
    - `dp[i] = dp[i - 1] * 2 + a[i];`
