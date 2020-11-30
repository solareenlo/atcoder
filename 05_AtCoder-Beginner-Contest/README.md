# AtCoder Beginner Contest
- ABC の解答リポジトリ．

## 解答の雛形の自動生成
- [kyuridenamida/atcoder-tools](https://github.com/kyuridenamida/atcoder-tools) で解答の雛形を自動生成しています．

### Usage
```bash
atcoder-tools help
atcoder-tools gen abc001
cd abc001/A
vim main.cpp
g++ main.cpp
atcoder-tools test
atcoder-tools submit
```

## テクニック 一覧

| Contest | A  | B  | C                                                           | D                                                                 | E                                                     | F         |
|---------|----|----|-------------------------------------------------------------|-------------------------------------------------------------------|-------------------------------------------------------|-----------|
| ABC179  | A: | B: | C:                                                          | D: 動的計画法 の中で 累積和                                       | E: パターン発見,<br>　 数列,<br>　 尻尾,<br>　 ループ | F:        |
| ABC178  | A: | B: | C: ベン図,<br>　 補集合,<br>　 包徐原理,<br>　 剰余演算     | D: パターン発見,<br>　 動的計画法,<br>　 高速 kitamasa 法         | E: マンハッタン距離,<br>　 最大距離,<br>　 絶対値     | F:        |
| ABC177  | A: | B: | C:                                                          | D: グループ分け,<br>　 Union-Find                                 | E: gcd,<br>　 パターン発見,<br>　 数学的考察          | F:        |
| ABC176  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC175  | A: | B: | C:                                                          | D: ループ 尻尾                                                    | E:                                                    | F:        |
| ABC174  | A: | B: | C: 筆算 の回数                                              | D: 右詰め する回数                                                | E:                                                    | F:        |
| ABC173  | A: | B: | C: 2次元平面 の bit 全探索                                  | D: 円 における パターン発見                                       | E:                                                    | F:        |
| ABC172  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC171  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC170  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC169  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC168  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC167  | A: | B: | C: bit 全探索                                               | D: ループ 尻尾,<br>　 ダブリング                                  | E: 数え上げ                                           | F: 折れ線 |
| ABC166  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC165  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC164  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC163  | A: | B: | C:                                                          | D: 階段上の図形 の 範囲の和,<br>　 パターン発見                   | E:                                                    | F:        |
| ABC162  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC161  | A: | B: | C:                                                          | D: パターン発見,<br>　 queue,<br>　 数字追加                      | E:                                                    | F:        |
| ABC160  | A: | B: | C:                                                          | D: パターン発見,<br>　 3パターン の 進み方                        | E: パターン発見,<br>　 X + Y 個までの 合計            | F:        |
| ABC159  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC158  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC157  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC156  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC155  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC154  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC153  | A: | B: | C:                                                          | D:                                                                | E: 動的計画法                                         | F:        |
| ABC152  | A: | B: | C:                                                          | D: パターン発見,<br>　 グループ分け,<br>　 先頭と末尾の数字       | E:                                                    | F:        |
| ABC151  | A: | B: | C:                                                          | D: グリッド,<br>　 深さ優先探索,<br>　 全探索,<br>　 2点間の距離  | E:                                                    | F:        |
| ABC150  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC149  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC148  | A: | B: | C:                                                          | D:                                                                | E: 数列,<br>　 割り切れる数の個数,<br>　 数学的考察   | F:        |
| ABC147  | A: | B: | C: bit 全探索,<br>　 正直者の人数,<br>　 __builtin_popcount | D:                                                                | E:                                                    | F:        |
| ABC146  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC145  | A: | B: | C:                                                          | D: パターン発見,<br>　 二項係数                                   | E:                                                    | F:        |
| ABC144  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC143  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC142  | A: | B: | C:                                                          | D: 最大公約数,<br>　 素因数分解,<br>　 積集合                     | E:                                                    | F:        |
| ABC141  | A: | B: | C:                                                          | D: priority_queue                                                 | E:                                                    | F:        |
| ABC140  | A: | B: | C:                                                          | D: パターン発見,<br>　 文字列操作,<br>　 右左                     | E:                                                    | F:        |
| ABC139  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC138  | A: | B: | C:                                                          | D: 深さ優先探索,<br>　 改変                                       | E:                                                    | F:        |
| ABC137  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC136  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC135  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC134  | A: | B: | C:                                                          | D: for文 の使い方,<br>　 総和 の 偶奇                             | E:                                                    | F:        |
| ABC133  | A: | B: | C:                                                          | D: 円 循環,<br>　 数式変換,<br>　漸化式                           | E:                                                    | F:        |
| ABC132  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC131  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC130  | A: | B: | C:                                                          | D: 累積和 に lower_bound                                          | E:                                                    | F:        |
| ABC129  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC128  | A: | B: | C: bit 全探索,<br>　 スイッチ                               | D:                                                                | E:                                                    | F:        |
| ABC127  | A: | B: | C:                                                          | D: 貪欲法,<br>　 パターン発見,<br>　 降順 昇順 比較               | E:                                                    | F:        |
| ABC126  | A: | B: | C:                                                          | D:                                                                | E:                                                    | F:        |
| ABC125  | A: | B: | C:                                                          | D: 符号反転,<br>　 パターン発見                                   |                                                       |           |
| ABC124  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC123  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC122  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC121  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC120  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC119  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC118  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC117  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC116  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC115  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC114  | A: | B: | C: 深さ優先探索,<br>　 パターン全列挙                       | D:                                                                |                                                       |           |
| ABC113  | A: | B: | C: lower_bound までの個数,<br>　 添字 の中の配列            | D:                                                                |                                                       |           |
| ABC112  | A: | B: | C: グリッド,<br>　 全探索,<br>　 条件見極め                 | D: 最大公約数,<br>　 数分割,<br>　 数列                           |                                                       |           |
| ABC111  | A: | B: | C: 数列 変換,<br>　 最頻値                                  | D:                                                                |                                                       |           |
| ABC110  | A: | B: | C: 添字 の中の配列,<br>　 文字列比較                        | D:                                                                |                                                       |           |
| ABC109  | A: | B: | C:                                                          | D: グリッド,<br>　 一筆書き                                       |                                                       |           |
| ABC108  | A: | B: | C: 整数論,<br>　 剰余演算,<br>　 パターン発見               | D:                                                                |                                                       |           |
| ABC107  | A: | B: | C: 蝋燭,<br>　 部分数列,<br>　 lr                           | D:                                                                |                                                       |           |
| ABC106  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC105  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC104  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC103  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC102  | A: | B: | C: 数列,<br>　 パターン発見,<br>　 中央値                   | D:                                                                |                                                       |           |
| ABC101  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC100  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC099  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC098  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC097  | A: | B: | C: K 文字以下,<br>　 部分文字列,<br>　 全探索               | D:                                                                |                                                       |           |
| ABC096  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC095  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC094  | A: | B: | C: median                                                   | D: lower_bound,<br>　 組合せ, パスカルの三角形                    |                                                       |           |
| ABC093  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC092  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC091  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC090  | A: | B: | C: シミュレーション,<br>　 パターン発見                     | D: 余りの性質,<br>　 剰余演算                                     |                                                       |           |
| ABC089  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC088  | A: | B: | C: 隣のセルとの差                                           | D: グリッド,<br>　 幅優先探索                                     |                                                       |           |
| ABC087  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC086  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC085  | A: | B: | C: 3重ループ を避ける                                       | D: lower_bound,<br>　 パターン発見                                |                                                       |           |
| ABC084  | A: | B: | C: パターン発見,<br>　 貪欲法                               | D: エラトステネスの揮 (素数 の列挙),<br>　 累積和                 |                                                       |           |
| ABC083  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC082  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC081  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC080  | A: | B: | C: bit 全探索                                               | D:                                                                |                                                       |           |
| ABC079  | A: | B: | C:                                                          | D: コスト計算,<br>　 ワーシャルフロイド法                         |                                                       |           |
| ABC078  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC077  | A: | B: | C: 組合せ,<br>　 lower_bound,<br>　 upper_bound             | D:                                                                |                                                       |           |
| ABC076  | A: | B: | C: 文字列操作,<br>　 部分文字列                             | D:                                                                |                                                       |           |
| ABC075  | A: | B: | C: 深さ優先探索,<br>　 辿り着けるか                         | D:                                                                |                                                       |           |
| ABC074  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC073  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC072  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC071  | A: | B: | C:                                                          | D: パターン発見                                                   |                                                       |           |
| ABC070  | A: | B: | C: 時計                                                     | D: 始点が任意の重みのある ダイクストラ法                          |                                                       |           |
| ABC069  | A: | B: | C: 隣合う数字 の パターン発見                               | D: マス の パターン発見                                           |                                                       |           |
| ABC068  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC067  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC066  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC065  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC064  | A: | B: | C:                                                          | D: () の パターン発見                                             |                                                       |           |
| ABC063  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC062  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC061  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC060  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC059  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC058  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC057  | A: | B: | C: 約数列挙，<br>　 パターン発見                            | D:                                                                |                                                       |           |
| ABC056  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC055  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC054  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC053  | A: | B: | C:                                                          | D: パターン発見                                                   |                                                       |           |
| ABC052  | A: | B: | C: 素因数分解,<br>　 約数の個数                             | D: 貪欲法                                                         |                                                       |           |
| ABC051  | A: | B: | C: パターン発見                                             | D:                                                                |                                                       |           |
| ABC050  | A: | B: | C: パターン発見                                             | D:                                                                |                                                       |           |
| ABC049  | A: | B: | C: 文字列操作                                               | D:                                                                |                                                       |           |
| ABC048  | A: | B: | C: 貪欲法                                                   | D:                                                                |                                                       |           |
| ABC047  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC046  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC045  | A: | B: | C: bit 全探索,<br>　 bit がフラグ                           | D:                                                                |                                                       |           |
| ABC044  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC043  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC042  | A: | B: | C: set を使った 全探索                                      | D:                                                                |                                                       |           |
| ABC041  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC040  | A: | B: | C: 動的計画法                                               | D:                                                                |                                                       |           |
| ABC039  | A: | B: | C:                                                          | D: 8近傍                                                          |                                                       |           |
| ABC038  | A: | B: | C: 尺取り法                                                 | D:                                                                |                                                       |           |
| ABC037  | A: | B: | C: 部分列 への 累積和                                       | D:                                                                |                                                       |           |
| ABC036  | A: | B: | C: 座標圧縮                                                 | D:                                                                |                                                       |           |
| ABC035  | A: | B: | C: テトリス 累積和                                          | D:                                                                |                                                       |           |
| ABC034  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC033  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC032  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC031  | A: | B: | C: パターン発見                                             | D:                                                                |                                                       |           |
| ABC030  | A: | B: | C: 貪欲法                                                   | D:                                                                |                                                       |           |
| ABC029  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC028  | A: | B: | C:                                                          | D: 場合分け                                                       |                                                       |           |
| ABC027  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC026  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC025  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC024  | A: | B: | C: 貪欲法                                                   | D:                                                                |                                                       |           |
| ABC023  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC022  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC021  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC020  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC019  | A: | B: | C: エラトステネスの揮                                       | D:                                                                |                                                       |           |
| ABC018  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC017  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC016  | A: | B: | C: 個数カウント,<br>　 ワーシャルフロイド法                 | D:                                                                |                                                       |           |
| ABC015  | A: | B: | C: 深さ優先探索                                             | D: 添字 を足す 動的計画法                                         |                                                       |           |
| ABC014  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC013  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC012  | A: | B: | C:                                                          | D: 最短経路問題,<br>　 ダイクストラ法,<br>　 ワーシャルフロイド法 |                                                       |           |
| ABC011  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC010  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC009  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC008  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC007  | A: | B: | C: グリッド,<br>　 幅優先探索                               | D:                                                                |                                                       |           |
| ABC006  | A: | B: | C: パターン発見                                             | D:                                                                |                                                       |           |
| ABC005  | A: | B: | C: パターン発見                                             | D:                                                                |                                                       |           |
| ABC004  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC003  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC002  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
| ABC001  | A: | B: | C:                                                          | D:                                                                |                                                       |           |
