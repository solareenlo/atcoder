# [CODE FESTIVAL 2016 qual A](https://atcoder.jp/contests/code-festival-2016-quala)

## [C - 次のアルファベット](https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_c)
- 「先頭の要素から順に見ていき，今見ている要素をできるだけ小さくする」という 貪欲法
- 今見ている文字が a でなければ，今見ている文字を a に変換する．
- そして，K から `('z' + 1 - s[i])` を引く．
- そして残った K の分だけ最後の文字を変換する．
	- `s[n - 1] += K % 26;`

