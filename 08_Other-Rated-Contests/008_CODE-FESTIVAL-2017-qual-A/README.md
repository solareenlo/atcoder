# [CODE FESTIVAL 2017 qual A](https://atcoder.jp/contests/code-festival-2017-quala)

## [C - Palindromic Matrix](https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_c)
- 解説は Notion にあり．

## [B - fLIP](https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_b)
- 反転させる場所は詰めて考えて良い．
- `i ∈ N`，`j ∈ M` とすると，
    - `j * (N - i) + i * (M - j)` が答え．
    - 反転させた場所を右上，左下にセットして考えてる．
