# [AtCoder Beginner Contest 136](https://atcoder.jp/contests/abc136/tasks)

## [D - Gathering Children](https://atcoder.jp/contests/abc136/tasks/abc136_d)
- どこに数が集まり，どのような集まり方をするのかを早く見抜く問題．
- 左から見た時の `R` への操作と，右から見た時の `L` への操作は全く同じなので，
    - 順番を逆にして，文字を入れ替えて，ループを2回回すテクニックを使う問題．
- **性質1:** 数は `RL` に集まり，`LR` の `L` と `R` の間で分断される．
- **性質2:** 数は同じグループに属する，左からの偶奇が同じ `RL` のどちらかに集まる．
- なので，左から順に `R` をカウントしながら，`L` が来ると，
    - それまでの `R の個数 / 2(切り捨て)` を `L` に足して，
    - それまでの `R の個数 / 2(切り上げ)` を `L` の直前の `R` に足す．
- `L` に関しては，文字列を逆順にして，`R` と `L` を入れ替えて，上記と同じ操作を繰り返す．

## [C - Build Stairs](https://atcoder.jp/contests/abc136/tasks/abc136_c)
- `左から右に向かって単調非減少`とは，一度でも下がったらダメということ．
