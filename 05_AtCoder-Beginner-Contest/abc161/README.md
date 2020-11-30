# [AtCoder Beginner Contest 161](https://atcoder.jp/contests/abc161)

## [D - Lunlun Number](https://atcoder.jp/contests/abc161/tasks/abc161_d)
- 1 ~ 9 までを queue に push して，
- パターンを発見して，パターンにそった数字を queue に push していき，
- K 回操作を行った時の数字が答え．
- パターンは
```sh
1 ... 1 の後ろに 0, 1 をくっつけた数字 10, 11 が数列の後ろに追加される数字になっている
2 ... 2 の後ろに 1, 2, 3 をくっつけた数字 21, 22, 23 が数列の後ろに追加される数字になっている
...
9 ... 9 の後ろに 8, 9 をくっつけた数字 98, 99 が数列の後ろに追加される数字になっている
```
- といったパターンになっている
