# [AtCoder Beginner Contest 090](https://atcoder.jp/contests/abc090)

## [D - Remainder Reminder](https://atcoder.jp/contests/abc090/tasks/arc091_b)
- mod の性質を探す問題．
- b を固定して考える．
- `N = div * b + rem (0 <= rem < b)`
	- という形で N を b を使って表すことができる．
	- つまり，
	- `0, 1, 2, ..., b - 1` という数列が div 個，
	- `0, 1, 2, ..., rem` という数列が1個,
	- 存在する．
- ので，b が k + 1 から n まで1ずつ増加するときの
	- `div * max(0, b - 1 - K + 1) + max(0, rem - K + 1)` の合計が答え．

## [C - Flip,Flip, and Flip......](https://atcoder.jp/contests/abc090/tasks/arc091_a)
- パターン発見 の問題．
- 1列や1行の場合は，`n - 2` か `m - 2`になる．
- 2列や2行の場合は，0になる．
- 3列以上かつ3行以上の場合は，`(n - 2) * (m - 2)` になる．
- シミュレーション できるコードを書いて確認する．
