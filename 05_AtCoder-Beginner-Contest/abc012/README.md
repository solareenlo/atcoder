# [AtCoder Beginner Contest 012](https://atcoder.jp/contests/abc012/tasks)

## [D - バスと避けられない運命](https://atcoder.jp/contests/abc012/tasks/abc012_4)
- 2点間の 最短経路 を求めればよい．
- 最短経路 を求めるには．
	- ダイクストラ法
		- 単一始点最短経路 を求めるアルゴリズム．
		- ある頂点を視点とした時，それ以外の頂点への最短経路を求めるアルゴリズム．
	- ワーシャルフロイド法
		- 全点対間最短経路 を求めるアルゴリズム．
		- 任意の頂点から任意の頂点までの最短経路を求めるアルゴリズム．
		```c++
		// k が経由する点，i が始点，j が終点
		REP(k, n) REP(i, n) REP(j, n)
			d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		```
	- の2つがある．
