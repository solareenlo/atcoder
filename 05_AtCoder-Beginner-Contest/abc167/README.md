# [AtCoder Beginner Contest 167](https://atcoder.jp/contests/abc167/tasks)

## [F: Bracket Sequencing](https://atcoder.jp/contests/abc167/tasks/abc167_f)
- `( = 1`, `) = -1` と考えて，
    - 判定条件を
    - 0で終わる．
    - 0未満にならない．
    - かを 折線 として考えていく．
    - この 折線 として考えていくことを学ぶ問題．
- 1行ごとの相対的な最下点の値と相対的な最終地点の値を見ていく．
    - この値の組み合わせは必ず V 字で表現できる．
    - 途中のギザギザは気にしない．
- 登っていくパートと減っていくパートに分けて考える．
    - 登っていくパートは最下点の値が大きい順にくっつける．
    - 下っていくパートは右側から見たときの相対的な最下点の値と相対的な最終地点の値で考える．
    - そして，最下点が小さい順に並べると良い．

## [E: Colorful-Blocks](https://atcoder.jp/contests/abc167/tasks/abc167_e)
- 数え上げ の問題．
- 筋の良い数え上げの方法を見つけられるかどうかがキー．
- 同じ色のグループを1つの塊として見る．
- [mint](https://github.com/solareenlo/cpp/blob/master/atcoder/tools/mint.cpp) と [combination](https://github.com/solareenlo/cpp/blob/master/atcoder/tools/combination-mod-prime.cpp) のライブラリを使用する．

## [D: Teleporter](https://atcoder.jp/contests/abc167/tasks/abc167_d)
- ループ の部分と 尻尾 の部分とに分けて考える．
- ダブリング も使える．

## [C: Skill Up](https://atcoder.jp/contests/abc167/tasks/abc167_c)
- bit 全探索 を使う．
