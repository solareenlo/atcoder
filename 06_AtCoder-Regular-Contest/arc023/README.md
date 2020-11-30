# [AtCoder Regular Contest 023](https://atcoder.jp/contests/arc023)

## [B - 謎の人物X](https://atcoder.jp/contests/arc023/tasks/arc023_2)
- 移動できる偶奇 と 座標の合計の偶奇 は一致するという条件を使う問題．

## [A - 経過日数](https://atcoder.jp/contests/arc023/tasks/arc023_1)
- 経過日数を計算できる式．
    ```bash
    365y + int(y/4) + int(y/100) - int(y/400) + int(306(m+1)/10) + d - 429
    ```
    - ただし，`1月`は`前年の13月`，`2月`は`前年の14月`として計算する．

