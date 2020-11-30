# [AtCoder Beginner Contest 133](https://atcoder.jp/contests/abc133)

## [D - Rain Flows into Dams](https://atcoder.jp/contests/abc133/tasks/abc133_d)
- 数式変換, 漸化式 を用いる問題．
- 条件より，雨の降った合計値 S は，`S = sum(A[i]) = sum(res[i])`
- また，
- `A[i]` = `(X[i] + X[i+1]) / 2`
- つまり，
- `X[i] + X[i + 1]` = `2 * A[i]`
- 従って，
- `X[0]` = `S - (X[1] + X[2] + ... + X[N - 1]` = `S - 2 * (A[1] + A[3] + ... + A[N - 2])`
- ので，上記と同様に前から順番に `X[1], X[2], X[3], ..., X[N - 1]` と計算すると，`O(N^2)` の時間がかかり， TLE になるので，
- `X[i] + X[i + 1] = 2 * A[i]` からの漸化式 `X[i + 1] = 2 * A[i] - X[i]` を利用し，`X[1], X[2], X[3] ... , X[N - 1]` を前から順番に計算した結果が答え．
