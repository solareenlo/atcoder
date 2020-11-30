# [AtCoder Beginner Contest 151](https://atcoder.jp/contests/abc151)

## [D - Maze Master](https://atcoder.jp/contests/abc151/tasks/abc151_d)
- 深さ優先探索 を用いた 全探索
- 始点となり得る全ての点から距離を 深さ優先探索 を用いて計算する問題．
- memset で 0 以外の値で memset すると サチュル ので，それを上手に利用した手法．
- 始点から4方向見ていって，進める場所が`自分が持っている値+1`より小さければ，その場所の値を`自分が持っている値+1`にしてあげる手法．
