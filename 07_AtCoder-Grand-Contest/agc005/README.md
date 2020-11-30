# [AtCoder Grand Contest 005](https://atcoder.jp/contests/agc005)

## [A - STring](https://atcoder.jp/contests/agc005/tasks/agc005_a)
- stack にどんどんデータを積んでいく．
- X の文字列を前から見ていって，
	- `S` が来たら stack に `S` を積む．
	- `T` が来て，
		- stack が empty だったら，stack に `T` を積む．
		- stack の一番後ろが `S` だったら，`S` を取り出す．
		- stack の一番後ろが `T` だったら，stack に `T` を積む．
- こうしてできた stack のサイズが答え．
