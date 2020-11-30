# [AtCoder Beginner Contest 159](https://atcoder.jp/contests/abc159/tasks)

## [D - Banned K](https://atcoder.jp/contests/abc159/tasks/abc159_d)
- k 番目のボールを消した時にどれだけ減るかを計算し，全体から引くのが良い．
    - まずは全体の2つのボールを選び出す方法を計算する．
    - 次に k 番目のボールの組合せを全体から引いて，
    - k 番目のボールの個数を1つ引いてから，
    - k 番目のボールを選ぶ組合せを全体に足す．
    - そして，k 番目のボールの個数を1つ増やす．
