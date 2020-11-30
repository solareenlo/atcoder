# [M-SOLUTIONS プロコンオープン 2020](https://atcoder.jp/contests/m-solutions2020)

## [D - Road to Millionaire](https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_d)
- 貪欲法
	- 次の価格が今の価格よりも高ければ，
		- 今，株を買えるだけ購入して，次で株を全部売却する．
	- それ以外は何もしない．
- 動的計画法
	- dp[x]: x 日目に，株の売却が終了した時点の所持金の最大値

## [C - Marks](https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_c)
- `A[i] < A[i + k]` であれば，`Yes`．
- そうでなければ，`No`．
