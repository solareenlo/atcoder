# [AtCoder Beginner Contest 011](https://atcoder.jp/contests/abc011/tasks)

## [C - 123引き算](https://atcoder.jp/contests/abc011/tasks/abc011_3)
- 動的計画法を使う問題．
    - 数字 n からスタートして，0になるまでの最低手数を数える．
    - 添字は 1 か 2 か 3 を引いた後の数．
    - 何回引いたかを1次元の dp テーブルに格納していく．
- vector はマイナスの添字を扱ってくれないので注意．
