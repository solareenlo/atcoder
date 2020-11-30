# [AtCoder Regular Contest 037](https://atcoder.jp/contests/arc037)

## [B - バウムテスト](https://atcoder.jp/contests/arc037/tasks/arc037_b)
- 深さ優先探索 の少し改良版.
- seen を使った木の グルーピング と, 閉路探索.
- ツリー においては，子はたくさんあっても良いが，親が複数あると 閉路 になるので, その性質を利用して，1つ前の親を保存しておいて，閉路かどうかを判定する．
- Reference
	- [4-2. 連結成分の個数](https://qiita.com/drken/items/a803d4fc4a727e02f7ba#4-2-%E9%80%A3%E7%B5%90%E6%88%90%E5%88%86%E3%81%AE%E5%80%8B%E6%95%B0)
