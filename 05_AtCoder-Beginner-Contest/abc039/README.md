# [AtCoder Beginner Contest 039](https://atcoder.jp/contests/abc039/tasks)

## [D - 画像処理高橋君](https://atcoder.jp/contests/abc039/tasks/abc039_d)
- 出力する元の画像は復元した画像のどれか一つで良いので，与えられた画像から普通に元の画像を復元する．
	- `#` の 8近傍 が `#` であれば，答えの画像の同じ座標に `#` を書き込む．
	- `#` がかぶっていても良いので．
- もしくは，与えられた画像の `.` の 8近傍 は元の画像で `.` になるので，その性質を使って，元の画像を復元する．
- そして，復元した画像から検証用の画像を生成し，与えられた画像と検証用の画像を比較して，同じであれば，`possible`，違っていれば `impossible` を出力する．

## [C - ピアニスト高橋君](https://atcoder.jp/contests/abc039/tasks/abc039_c)
- ` ファ#`を基準に考える．
