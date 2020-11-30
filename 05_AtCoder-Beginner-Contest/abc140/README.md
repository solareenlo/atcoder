# [AtCoder Beginner Contest 140](https://atcoder.jp/contests/abc140)

## [D - Face Produces Unhappiness](https://atcoder.jp/contests/abc140/tasks/abc140_d)
- まず，初めの考察として，
	- 操作を行った後で，`LL` or `RR` になったならば，幸福度は `+1` される．
- そして，1回の操作では幸福度は最大で `+2` できる．
	- なぜならば，
	- 操作を行う範囲の両脇が `LL` or `RR` になり得るから．
	- 操作を行う範囲は入れ替えるだけなので，操作を行う範囲の中では幸福度の変更はない．
- 1回の操作で幸福度が `+2` されるパターンは，
	- `LR ~ RL`
	- `RL ~ LR`
	- の2パターン．
- 基本的には，幸福度を `+2` することができる．
	- なぜならば，
	- 普通にチグハグになっている部分を入れ替えてあげると `+2` できるから．
	- 例
	- `LRLRRL` → `LLLRRL` で `+2` される．
	- `LRLRRL` → `LRLLLL` で `+2` される．
	- `LRLRRL` → `LRRRRL` で `+2` される．
- 幸福度を `+2` できないパターンは，
	- 全部が同じ文字．
	- `LLLRRR` などの2つの塊しかない場合．n
