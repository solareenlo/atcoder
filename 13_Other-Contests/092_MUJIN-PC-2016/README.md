# [MUJIN プログラミングチャレンジ Programming Challenge](https://atcoder.jp/contests/mujin-pc-2016/tasks)

## [B - ロボットアーム](https://atcoder.jp/contests/mujin-pc-2016/tasks/mujin_pc_2016_b)
- 点 C が移動できる最大の半径 R と最小の半径 r が求まれば，
    - 面積は `(pow(R, 2) - pow(r, 2)) * PI)` で求まる．
- 最大の半径 R は，
    - `R = a + b + c;`
- 最小の半径 r は，`a <= b <= c` とすると，
    - `a + b >= c` の場合，
        - 三角形を作ることができる（原点 O と点 C を一致させることができる）ので，
        - `r = 0`
    - `a + b < c` の場合，
        - `vec(OC) = vec(OA) + vec(AB) + vec(BC)` なので，線分 OA, AB, BC を入れ替えても点 C の座標は変わらない．よって，
        - `r = c - (a + b)`
