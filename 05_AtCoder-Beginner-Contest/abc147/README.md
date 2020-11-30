# [AtCoder Beginner Contest 147](https://atcoder.jp/contests/abc147)

## [D - Xor Sum 4](https://atcoder.jp/contests/abc147/tasks/abc147_d)
- 解説は Notion に有り．

## [C - HonestOrUnkind2](https://atcoder.jp/contests/abc147/tasks/abc147_c)
- 正直者が bit が立っているところにして, bit 全探索 を行う．
- bit が立っている状態と確認される人の証言が一致していたらその人正直者とする．
- そうして `__buildin_popcount` でカウントした bit の個数が最大の時が答え．
