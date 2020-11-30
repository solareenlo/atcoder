# [キーエンス プログラミング コンテスト 2020](https://atcoder.jp/contests/keyence2020)

## [C - Subarray Sum](https://atcoder.jp/contests/keyence2020/tasks/keyence2020_c)
- S を K 個，`1e9` を `(N - K)` 個並べれば良い．
    - ただし，`S = 1e9` の場合は，
    - S を K 個，`(1e9 - 1)` を `(N - K)` 個並べれば良い．

## [B - Robot Arms](https://atcoder.jp/contests/keyence2020/tasks/keyence2020_b)
- 貪欲法
- `mini = X[i] - L[i]`，`maxi = X[i] + L[i]` とする．
- maxi の値で昇順にソートする．
- ロボット R[i+1] の mini が R[i] の maxi と被らないなら残す，被るなら残さない．
	- という 貪欲法
