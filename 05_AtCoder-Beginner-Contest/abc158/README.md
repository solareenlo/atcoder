# [AtCoder Beginner Contest 158](https://atcoder.jp/contests/abc158/tasks)

## [D - String Formation](https://atcoder.jp/contests/abc158/tasks/abc158_d)
- 普通に string の前後を入れ替えると計算量が `O((N+Q)^2)` となり TLE になる．
    - ここで，`N` が文字数，`Q` が前後を入れ替える回数．
- 方法は2種類ある．
    - 先頭に追加する用の別の文字列をもう1つ用意する．
    - もしくは，`deque` を使用する．
    - string の先頭に文字を追加するのは `O(|S|)` かかるので，`deque` を使用する．
