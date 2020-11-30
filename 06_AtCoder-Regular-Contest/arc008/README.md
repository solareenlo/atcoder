# [AtCoder Regular Contest 008](https://atcoder.jp/contests/arc008)

## [B - 謎のたこ焼きおじさん](https://atcoder.jp/contests/arc008/tasks/arc008_2)
- kit の中に name の文字がなければ，`-1`．
- kit と name の積集合 a をとり，`name -= a;` を行う．
	- これ繰り返して，name が 0 になるまでの回数が答え．
- もしくは，`(必要な文字の個数 + その文字の kit 中の個数 - 1 ) / その文字の kit 中の個数` の最大値が答え．
