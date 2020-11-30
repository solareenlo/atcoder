# [AtCoder Grand Contest 046](https://atcoder.jp/contests/agc046)

## [B - Extension](https://atcoder.jp/contests/agc046/tasks/agc046_b)
- 動的計画法を使って解く問題．
- マス目は上に1行増えるか，右に1列増えるかのどちらか一方である．
- `dp[i][j] = ((dp[i - 1][j] * j) + (dp[i][j - 1] * i) - (dp[i - 1][j - 1] * (i - 1) * (j - 1)) % MOD + MOD) % MOD;`
    - `dp[i][j]`は，今のパターン数．
    - `dp[i - 1][j] * j` は，1つ前から上に1行増えた時のパターン数．
    - `dp[i][j - 1] * i` は，1つ前から右に1列増えた時のパターン数．
    - `dp[i - 1][j - 1]` は，2つ前のパターン数．
    - `dp[i - 1][j - 1] * (i - 1) * (j - 1)` は，2つ前のパターンから今のパターンに来た時の重複しているパターン数．
