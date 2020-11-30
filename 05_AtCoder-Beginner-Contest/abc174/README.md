# [AtCoder Beginner Contest 174](https://atcoder.jp/contests/abc174)

## [E - Logs](https://atcoder.jp/contests/abc174/tasks/abc174_e)
- 解説は Notion に有り．

## [D - Alter Altar](https://atcoder.jp/contests/abc174/tasks/abc174_d)
- `W` を右側に詰めて配置する回数をカウントすれば良い．

## [C - Repsept](https://atcoder.jp/contests/abc174/tasks/abc174_c)
- 2の倍数と5の倍数は除外する．
	- なぜなら，2と5の倍数は1のくらいが7になることはないから．
- その他の数の倍数は，必ず1の位に7が出現するのでいつかは割り切れる．
	- よって，筆算の位取りをした回数をカウントすれば良い．
