# [AtCoder Grand Contest 032](https://atcoder.jp/contests/agc032)

## [B - Balanced Neighbors](https://atcoder.jp/contests/agc032/tasks/agc032_b)
- 解説は Notion に有り．

## [A - Limited Insertion](https://atcoder.jp/contests/agc032/tasks/agc032_a)
- 答えから逆算して考える問題．
- 答えがあるならば1通りしかない．
- なぜならば，k 番目のボールには必ず k と書かれているから．
	- 条件から `j 番目に j を挿入する` となっているから．
- ので，k 番目のボールに k と書かれているボールを1つずつ取り除いていって，全部取り除けたら，それが答え．
	- ここで注意が必要で，k 番目のボールに k と書かれたボールが複数個ある場合は，一番右のボールから取り除く．
	- なぜならば，左側のボールを先に取り除くと右側のボールの番号と順番がずれるから．
