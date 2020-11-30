# [AtCoder Grand Contest 035](https://atcoder.jp/contests/agc035/tasks)

## [A - XOR Circle](https://atcoder.jp/contests/agc035/tasks/agc035_a)
### 解法2
- 全ての数の `ビットごとの排他的論理和` が 0 なれば true．

### 解法1
- 全て数が 0 ならば true．
- 0 の個数の2倍の同じ数があれば true．
- 数の種類が3種類かつ，それぞれの個数が同じかつ，`a ⊕ b ⊕ c = 0` が成り立つならば，true．

### ビットごとの排他的論理和とは
- n 個の非負整数 `x1, x2, …, xn` の排他的論理和 `x1 ⊕ x2 ⊕ … ⊕ xn` は以下のように定義される．
    ```bash
    x1 ⊕ x2 ⊕ … ⊕ xn を二進表記した際の 2^k (k ≥ 0) の位の数は x1, x2, …, xn のうち，二進表記した際の 2^k (k ≥ 0) の位の数が 1 となるものの個数が奇数ならば 1，そうでなければ 0 となる．
    ```
    - 例：`3 ⊕ 5 = 11 ⊕ 101 = 110 = 6`
