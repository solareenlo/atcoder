# [AtCoder Grand Contest 022](https://atcoder.jp/contests/agc022/tasks)

## [A - Diverse Word](https://atcoder.jp/contests/agc022/tasks/agc022_a)
- `S` が26文字でない時は，
    - `S` の後ろに `S` に含まれていない最小の文字をくっつけ文字列が答え．
- `S` が26文字の場合は，
    - `S` の後ろから降順に並んでいる文字列 `T` を探して，
    - `T` の中で `T` の1つ前の文字より大きい，最小の文字を `S - T` の後ろにくっつけた文字列が答え．
