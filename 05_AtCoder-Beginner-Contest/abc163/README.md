# [AtCoder Beginner Contest 163](https://atcoder.jp/contests/abc163)

## [D - Sum of Large Numbers](https://atcoder.jp/contests/abc163/tasks/abc163_d)
- 階段上の図形 の性質
- 選んだ数の個数が異なる場合，それらの数の和が等しくなることはない．
	- なぜなら，数は常に1ずつ増えているから．
- よって，選んだ数の個数が K, K+1, K+2, K+3, ... N + 1 の各場合における数の和を求め，それらの合計が答え．
	- M 個の数を選ぶ場合，和としてあり得る最小値 mini は，小さい方から M 個とった場合．
	- M 個の数を選ぶ場合，和としてあり得る最大値 maxi は，大きい方から M 個とった場合．
	- よって， M 個の数を選ぶ場合の数の和は，maxi - mini．
	- 1ずつ増える階段上の図形を考えると mini と maxi には以下の性質が成り立っている．
	- mini == (M - 1) * M / 2;
	- maxi == N * M - mini;
	- M == その範囲の数の個数
	- (M - 1) == その範囲における数の最大値
	- (M - 1) * M / 2 == その範囲の数の合計値
	- N == 全体における最大の数の値


### Reference
- [よくやる 二項係数 (nCk mod. p)、 逆元 (a^-1 mod. p) の求め方](https://drken1215.hatenablog.com/entry/2018/06/08/210000)
- [競プロでよく使う 二項係数 (nCk)を素数(p)で割った余りの計算と 逆元 のまとめ](https://algo-logic.info/combination)
