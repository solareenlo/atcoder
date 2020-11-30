# [CODE FESTIVAL 2016 Final](https://atcoder.jp/contests/cf16-final/tasks)

## [B - Exactly N points](https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_b)

| 1 から n までの和     | 計算結果 |
|-----------------------|----------|
| 1                     | 1        |
| 2                     | 2        |
| 1 + 2                 | 3        |
| 1 + 2 + 3             | 6        |
| 1 + 2 + 3 + 4         | 10       |
| 1 + 2 + 3 + 4 + 5     | 15       |
| 1 + 2 + 3 + 4 + 5 + 6 | 21       |

- 上の表の結果からわかる考察として，数を分割した時の最大値が最小となるには，
    - 4 から 6 の数は必ず 3 を含む．
    - 5 から 10 の数は必ず 4 を含む．
    - 11 から 15 の数は必ず 5 を含む．
    - 16 から 21 の数は必ず 6 を含む．
