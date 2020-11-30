# [Educational DP Contest](https://atcoder.jp/contests/dp/tasks)
- Dinamic Programming の練習を目的とした有志コンテストを解いたリポジトリ．

## [D - Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d) と [E - Knapsack 2](https://atcoder.jp/contests/dp/tasks/dp_e) の違い
- D は dp の表の縦軸に`品物の個数`，横軸に`重さの合計`，表の中には`価値の最大値`が入る．
    - 重さ <= 10^5, 価値 <= 10^9
- E は dp の表の縦軸に`品物の個数`，横軸に`価値の合計`，表の中には`重さの最大値`が入る．
    - 重さ <= 10^9, 価値 <= 10^3 * 10^2
- 条件は`重さの合計`が W 以下でなければならない．

## 解法例
問題: [N - Slimes](https://atcoder.jp/contests/dp/tasks/dp_n)
解法: [N - Slimes 解説 (Educational DP Contest / DP まとめコンテスト)](https://algo-logic.info/educational-dp-contest-n/)

問題: [L - Deque](https://atcoder.jp/contests/dp/tasks/dp_l)
解法: [L - Deque 解説 (Educational DP Contest / DP まとめコンテスト)](https://algo-logic.info/educational-dp-contest-l/)

問題: [E - Knapsack 2](https://atcoder.jp/contests/dp/tasks/dp_e)
解法: [E 問題 - Knapsack 2](https://qiita.com/drken/items/dc53c683d6de8aeacf5a#e-%E5%95%8F%E9%A1%8C---knapsack-2)

問題: [D - Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d)
解法: [D 問題 - Knapsack 1](https://qiita.com/drken/items/dc53c683d6de8aeacf5a#d-%E5%95%8F%E9%A1%8C---knapsack-1)

問題: [C - Vacation](https://atcoder.jp/contests/dp/tasks/dp_c)
解法: [C 問題 - Vacation](https://qiita.com/drken/items/dc53c683d6de8aeacf5a#c-%E5%95%8F%E9%A1%8C---vacation)

問題: [B - Frog 2](https://atcoder.jp/contests/dp/tasks/dp_b)
解法: [B 問題 - Frog 2](https://qiita.com/drken/items/dc53c683d6de8aeacf5a#b-%E5%95%8F%E9%A1%8C---frog-2)

問題: [A - Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a)
解法: [A 問題 - Frog 1](https://qiita.com/drken/items/dc53c683d6de8aeacf5a#a-%E5%95%8F%E9%A1%8C---frog-1)

## References
- [貰う DP と配る DP の比較](https://qiita.com/drken/items/ace3142967c4f01d42e9#%E8%B2%B0%E3%81%86-dp-%E3%81%A8%E9%85%8D%E3%82%8B-dp-%E3%81%AE%E6%AF%94%E8%BC%83)
- [典型的な DP (動的計画法) のパターンを整理 Part 1 ～ ナップサック DP 編 ～](https://qiita.com/drken/items/a5e6fe22863b7992efdb)
- [ゲームを解く！Educational DP Contest K, L 問題の解説](https://qiita.com/drken/items/4e1bcf8413af16cb62da)
- [Educational DP Contest の F ～ J 問題の解説と類題集](https://qiita.com/drken/items/03c7db44ccd27820ea0d)
- [動的計画法超入門！ Educational DP Contest の A ～ E 問題の解説と類題集](https://qiita.com/drken/items/dc53c683d6de8aeacf5a)
