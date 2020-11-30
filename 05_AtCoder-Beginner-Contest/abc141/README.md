# [AtCoder Beginner Contest 141](https://atcoder.jp/contests/abc141)

## [D - Powerful Discount Tickets](https://atcoder.jp/contests/abc141/tasks/abc141_d)
- priority_queue （ 優先度付きキュー ）の練習問題．
- priority_queue を使えば，`|Q|` を優先度付きキューに入っている値の数として，
	- 値の追加: `O(log|Q|)`
	- 値の削除: `O(log|Q|)`
	- 最大値の取得: `O(1)`
	- の時間で行うことができる．
- 一番値段が大きい品物の値段を順次半額にしていく．
