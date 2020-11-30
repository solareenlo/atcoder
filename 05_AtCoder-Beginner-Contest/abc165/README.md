# [AtCoder Beginner Contest 165](https://atcoder.jp/contests/abc165/tasks)

## [D - Floor Function](https://atcoder.jp/contests/abc165/tasks/abc165_d)
- `mod 計算`の問題．
- 以下の2つの式を使用する．
    - `floor(A/B) = (A - (A % B)/B` --- (1)
    - `A*x % B = A*(x % B) % B` --- (2)
        - `mod はいつ取っても同じ値になる．`を使用している．

```bash
floo(A*x/B) - A*floor(x/B)
= (A*x - (A*x % B))/B - A*(x - (x % B))/B  [式(1)を使用する]
= (A*x - (A*x % B) - A*x + A*(x % B))/B  [展開するだけ]
= (A*(x % B) - (A*x % B))/B  [A*x を消して，入れ替えただけ]
= (A*(x % B) - A*(x % B)%B)/B  [式(2)を使用する]
= floor(A*(x % B)/B)  [式(1)の逆を行う]
```

- ここで `A, B ∈ 正の整数` は定数なので，`x % B` が最大化すれば良い．
    - `x ∈ N` において，`x = B - 1` のとき最大となるので，
    - `N ≧ B - 1` → `x = B - 1`
    - `N < B - 1` → `x = N`

## [C - Many Requirements](https://atcoder.jp/contests/abc165/tasks/abc165_c)
- 調べる種類が92378 (19 Choose 9) 通りしか無いので，全探索を行えば良い．
    - `1 ≦ M ≦ 10` までの数字を `M - 1` の仕切りで区切った時の，`2 ≦ N ≦ 10` 個のボールを配置する通りは，`((M - 1) + N) Choose (M - 1)` 通りなので， 最大は `19 Choose 9` になる．
    - こういう問題は合計数から仕切りの置き方の組合せを考えれば良い．
- `深さ優先探索`で解ける問題．
- 深さ優先探索には再帰関数を使って書く．
- 再帰関数を書くには，
    - 再帰の１ステップで何をしたら次に繋げられるか？
    - 終了条件をどうするか？
    - の2点が大事．
