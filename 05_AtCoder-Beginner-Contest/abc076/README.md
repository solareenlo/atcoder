# [AtCoder Beginner Contest 076](https://atcoder.jp/contests/abc076)

## [C - Dubious Document 2](https://atcoder.jp/contests/abc076/tasks/abc076_c)
- 文字列操作 の問題．
- まずは，文字列 S と文字列 T を `reverse` する．
- その後，文字列 S の中から，文字列 T の長さ分の部分文字列を取得する．
- その取得した部分文字列と文字列 T を `?` の部分を考慮して比較する．
- 全部同じであれば，そこで比較を終了し，
	- 文字列 S 中の 文字列 T と一致する部分に文字列 T を代入する．
- 文字列 S の残った `?` の部分に `a` を代入する．
- そうして出来上がった文字列 S を `reverse` した文字列が答え．
