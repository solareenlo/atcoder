# [AtCoder Beginner Contest 071](https://atcoder.jp/contests/abc071/tasks)

## [D - Coloring Dominoes](https://atcoder.jp/contests/abc071/tasks/arc081_b)
- パターン発見 の問題．
- 一番初めの塗り方は，3通りか6通りのどちらか．
	- 縦に2つ同じ文字が並んでいると3通り．
	- 横に2つ同じ文字が並んでいると6通り．
- それ以降は，2通りか1通りか2通りか3通りのどれかなので，順次掛けていくと答えが求まる．
	- 縦・縦 = 2通り
	- 横・縦 = 1通り
	- 縦・横 = 2通り
	- 横・横 = 3通り
