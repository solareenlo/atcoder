# [AtCoder Regular Contest 006](https://atcoder.jp/contests/arc006)

## [C - 積み重ね](https://atcoder.jp/contests/arc006/tasks/arc006_3)
- lower_bound を使う問題．
- 自分以上の箱の上に積み重ねていけば良い．
- 自分以上の箱がない場合は，自分を後ろに付け加える．
- そうしたときの最後の vector のサイズが答え．

## [B - あみだくじ](https://atcoder.jp/contests/arc006/tasks/arc006_2)
- `int n; cin >> n; cin.ignore()` とすると，`n` の後ろの改行を読み飛ばして，次の行から読み込みを開始できる．
