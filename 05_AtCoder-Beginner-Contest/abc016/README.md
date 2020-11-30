# [AtCoder Beginner Contest 016](https://atcoder.jp/contests/abc016/tasks)

## [C - 友達の友達](https://atcoder.jp/contests/abc016/tasks/abc016_3)
### 解法２
- ワーシャルフロイド法 を使って，最短距離が２の個数をカウントすれば良い．

### 解法１
- 友達の友達を `set` に入れて，最後にその集団から友達を除いた数が答え．
