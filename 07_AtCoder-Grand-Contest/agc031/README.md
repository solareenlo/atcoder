# [AtCoder Grand Contest 031](https://atcoder.jp/contests/agc031)

## [A - Colorful Subsequence](https://atcoder.jp/contests/agc031/tasks/agc031_a)
- `a ~ z` までの文字が何個現れるかを数えて，`その個数 + 1` を `res = 1;` にどんどん掛けて，最後に1引いた数が答え．
- なぜなら，a が3個現れた場合は，3個の a の中から1つを選ぶ通りが3通りで，a を選ばない選択肢もあるので，`3 + 1` が a の場合の通り．
- なので，それぞれの文字が出現する回数 + 1 を `res = 1;` に掛けて，最後に全部を選ばなかった場合の1通りを引いてあげた数が答え．
