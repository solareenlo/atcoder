# [AtCoder Grand Contest 028](https://atcoder.jp/contests/agc028/tasks)

## [A - Two Abbreviations](https://atcoder.jp/contests/agc028/tasks/agc028_a)
- `G = gcd(N, M)`，`L = lcm(N, m) = N * M / G`とすると，
- 答えは，`-1` か `L` のどちらかになる．
- 比較すべき数は
    - `i * (L / M) = i * (L / N)` の箇所，
    - すなわち，`i * ((N * M / G) / M) = i * ((N * M / G) / N)`
    - すなわち，`i * (N / G) = i * (M / G)` の箇所．
- 比較すべき数の個数は，`G` 個．
- この比較すべき数が
    - 1つでも違っていたら，答えは `-1`．
    - 全部同じであれば，答えは `L`．

