# [第一回日本最強プログラマー学生選手権-予選-](https://atcoder.jp/contests/jsc2019-qual/tasks)

## [B - Kleene Inversion](https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_b)
- `k == 1` の時は，自分より前の小さい数の個数の総和(= sum1)．
- `k > 1` の時は，
    - `sum2 = 整数列 A 内における自分より小さい数の個数の総和`
    - とすると，
    - `k == 2` の時は，
        - `ans = sum1 + (sum1 + 1 * sum2);`
    - `k == 3` の時は，
        - `ans = sum1 + (sum1 + 1 * sum2) + (sum1 + 2 * sum2);`
    - よって，答えは
        - 答え = `(sum1 * k) + sum2 * (k - 1) * (1 + (k - 1)) / 2`
    - 等差数列の和を用いる．
