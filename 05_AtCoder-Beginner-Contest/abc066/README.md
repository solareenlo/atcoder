# [AtCoder Beginner Contest 066](https://atcoder.jp/contests/abc066/tasks)

## [C - pushpush](https://atcoder.jp/contests/abc066/tasks/arc077_a)
- reverse は時間がかかるので，2つの vector `l`, `r`  に数字を格納していく問題．
- n が奇数の時は，
    - 奇数番目の数字を `l` に push_back する．
    - 偶数盤目の数字を `r` に push_back する．
- n が偶数の時は，
    - 奇数番目の数字を `r` に push_back する．
    - 偶数番目の数字を `l` に push_back する．
- そして，`l` を reverse してから，`l` と `r` を合体させたものが答えになる．
