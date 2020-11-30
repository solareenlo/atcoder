# [AtCoder Beginner Contest 166](https://atcoder.jp/contests/abc166/tasks)

## [F: Three Variables Game](https://atcoder.jp/contests/abc166/tasks/abc166_f)
- `std::endl` は遅いので，`'\n'` を使う．
- ジェネリックラムダを使用しているので，`-std=c++14` オプションを付与する．
    ```bash
    g++ -std=c++14 F_Three-Variables-Game.cpp
    ```

## [E: This Message Will Self-Destruct in 5s](https://atcoder.jp/contests/abc166/tasks/abc166_e)
- `for` 2回回すよりも連想配列を使うと計算が高速になる．
- さらに高速にするためには問題内容を読み替える．
- `O(n^2)` を `O(n)` に落とすには，「ペアが満たす条件 → それぞれが満たす条件」に変換して計算する．
    - ここでは具体的には `j - i = A_i + A_j` → `i + A_i = j + A_j`
- 求める答えの範囲は `int` の範囲を超えるので `long long` を使用する．

## [D: I hate Factorization](https://atcoder.jp/contests/abc166/tasks/abc166_d)
- 求める答えの範囲に目星をつけて，全探索を行えば良い．
- https://www.wolframalpha.com/ で数式のグラフを描写して，おおよその答えの範囲を探れば良い．
