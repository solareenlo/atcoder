# [AtCoder Beginner Contest 035](https://atcoder.jp/contests/abc035)

## [C - オセロ](https://atcoder.jp/contests/abc035/tasks/abc035_c)
- 累積和 を用いる問題．
- テトリス みたいに上から任意の範囲がどんどん重なった時の，
    - 縦の個数を調べるのに，累積和を用いる方法は，
    - 任意の範囲のスタートの地点を `+1` して，終了地点の次の地点を `-1` して，累積和をとるとちょうど，範囲の部分だけが `+1` される．
    ```
    0001000000-10000
    000111111100000
    ```
    - になって，`±1` を増える回数分だけ繰り返して，最後に累積和をとると，縦の個数が調べられる．
- 縦の個数を2で割った余りの並びが答え．
