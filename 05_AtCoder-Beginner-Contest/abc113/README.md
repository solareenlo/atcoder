# [AtCoder Beginner Contest 113](https://atcoder.jp/contests/abc113)

## [C - ID](https://atcoder.jp/contests/abc113/tasks/abc113_c)
- `lower_bound` までの個数．
- `vector<vector<int> > city[i]` に街 `i` で 市 `j` が誕生した年 `p[j]` を `push_back` していく．
- そして，`sort(city[i].begin(), city[i].end());` でソートする．
- そして，街 `i` で誕生した市の順番を `lower_bound` で探索し，`printf("%06d%06d\n", i, lower_bound で探索した順番)` で出力すると答え．
