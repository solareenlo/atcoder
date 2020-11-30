# [AtCoder Beginner Contest 169](https://atcoder.jp/contests/abc169/tasks)

## [F - Knapsack for All Subsets](https://atcoder.jp/contests/abc169/tasks/abc169_f)
- A の部分集合 T の部分集合 U の元の和が S になっているものの個数を求める問題．
- 動的計画法を使って解く．
- 動的計画法を使うことで，ある集合の部分集合の総数を求めたり，その部分集合の総数を利用して，条件を満たす部分集合の部分集合の個数を求めることができる．
- 小さい数で図を書いてみる．
![abc169_f](./img/abc169_f.png)
```
問題は以下のように言い換えることができます．
    {1, 2, . . . , N} の空でない部分集合 (T, U) の組であって以下の条件を満たすものは何通りありますか？
    1. U は T の部分集合である
    2. U = {x1, x2, . . . , xk} とすると ax1 + ax2 + · · · + axk = S
このとき，各 i (1 ≤ i ≤ N) について，
    1. U にも T にも入れる
    2. T には入れるが U には入れない
    3. U にも T にも入れない
の 3 つの選択肢があり，1つめの選択肢を選んだときのみ和が ai だけ増えます．
以上の考察により，
dp[i][j] = i 番目までの選択をして，1つめの選択肢を選んだ k に対する ak の和が j であるような場合の数
と定め，動的計画法を用いるとよいということがわかります．
```

## [E - Count Median](https://atcoder.jp/contests/abc169/tasks/abc169_e)
- 中央値とはソートした時の真ん中の数のこと．
    - 奇数の場合は真ん中の数．
    - 偶数の場合は真ん中に近い2つの数の平均値．
- 中央値の最小値は，全部 Ai にした時の中央値．
- 中央値の最大値は，全部 Bi にした時の中央値．
- それで，中央値を Ai から1ずつ増やして，Bi に持っていく時に，Ai から Bi の間には全部中央値が存在する．
- Ai から Bi の間に全部中央値が存在する証明のイメージ(N が奇数バージョン)はこんな感じ．
![abc169_e](./img/abc169_e.png)
- それで，`(xo の個数) ≦ ((N - 1) / 2)`，`(ox の個数) ≦ ((N - 1) / 2)`で，
    - 中央値を0から max  まで1ずつ移動させていくと，`ox → oo → xo` の範囲を移行していく．
    - `ox` は，中央値より小さい範囲に持っていける `Ai ≤ Xi ≤ Bi`．
    - `oo` は，中央値より小さい範囲・大きい範囲両方に持っていける `Ai ≤ Xi ≤ Bi`．
    - `xo` は，中央値より大きい範囲に持っていける `Ai ≤ Xi ≤ Bi`．
- N が偶数の時もAi から Bi の間には全部中央値が存在します．


## [D - Div Game](https://atcoder.jp/contests/abc169/tasks/abc169_d)
- 素因数分解の問題．
- 各素因数の冪乗から 1, 2, 3, ... を引いた回数の合計が答えになる．

## [C - Multiplication 3](https://atcoder.jp/contests/abc169/tasks/abc169_c)
- 少数の取り扱いに気をつける問題．
- double 型で読み込んでから，100倍して，1/100倍する問題．

## [B - Multiplication 2](https://atcoder.jp/contests/abc169/tasks/abc169_b)
- 多倍長整数を扱う問題．
- `boost/multiprecision/cpp_int.hpp` ライブラリをインストールすれば使える．
    - Mac なら `brew install boost` でインストールできる．
