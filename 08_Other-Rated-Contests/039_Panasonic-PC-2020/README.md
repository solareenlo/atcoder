# [パナソニックプログラミングコンテスト2020](https://atcoder.jp/contests/panasonic2020)

## [D - String Equivalence](https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_d)
- 解説は Notion にあり．

## [C - Sqrt Inequality](https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_c)
- 式を変換して，整数の大小関係を調べる．
    ```bash
    sqrt(a) + sqrt(b) < sqrt(c)
    pow(sqrt(a) + sqrt(b), 2) < c
    a + 2 * sqrt(a * b) + b < c
    2 * sqrt(a * b) < c - a - b
    ```
- なので，与えられた式が成り立つ条件は，
    - `c - a - b > 0` かつ `4 * a * b < pow(c - a - b)`
