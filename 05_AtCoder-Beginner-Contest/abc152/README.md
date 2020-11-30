# [AtCoder Beginner Contest 152](https://atcoder.jp/contests/abc152)

## [D - Handstand 2](https://atcoder.jp/contests/abc152/tasks/abc152_d)
- 先頭の数字を `i`, 末尾の数字を `j` として，`1 ~ N` までの数字をグループ分けし，
	- それぞれの組み合わせが何個あるかをカウントする．
- そうしてカウントしたものを `cnt[i][j]++` とすると，
	- 答えは `cnt[i][j] * cnt[j][i]` になっている．
