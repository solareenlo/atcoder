# [AtCoder Regular Contest 043](https://atcoder.jp/contests/arc043)

## [A - 点数変換](https://atcoder.jp/contests/arc043/tasks/arc043_a)
- 全ての数に Q を足しても最小値と最大値の差は変わらないので，
    - まずは，最小値と最大値の差が B になるような適切な P を求める．
- その後，全ての数を P 倍してから，
    - 平均値が A になるような適切な Q を求める．
- 拡張ユークリッドの互除法では解けない．
