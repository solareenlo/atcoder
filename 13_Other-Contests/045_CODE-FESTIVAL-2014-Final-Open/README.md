# [CODE FESTIVAL 2014 決勝（オープン）](https://atcoder.jp/contests/code-festival-2014-final-open)

## [E - 常ならずグラフ](https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_e)
- 解説は Notion にあり．

## [C - N進数](https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_c)
- `f(23) = pow(23, 0) * 3 + pow(23, 1) * 2;`
    - になっている．
- max でも `f(10000) = 10000000000000000` なので，
    - 10 から 10000 までの全探索を行えば良い．
