# [diverta 2019 Programming Contest](https://atcoder.jp/contests/diverta2019)

## [D - DivRem Number](https://atcoder.jp/contests/diverta2019/tasks/diverta2019_d)
- 解説は Notion に有り．

## [C - AB Substrings](https://atcoder.jp/contests/diverta2019/tasks/diverta2019_c)
- 文字列 S 中の AB の個数 = cnt
- 先頭が B，末尾が A の場合 = cntAB
- 先頭が B，末尾が A でない = cntB
- 先頭が B でなく，末尾が A = cntA
	- の4パターンが答えに影響する．
- `cntAB == 0` の時，答え = `cnt + min(cntB, cntA)`
- `cntAB > 0 && cntB + cntA > 0` の時，答え = `cnt + cntBA + min(cntB, cntA)`
- `cntAB > 0 && cntB + cntA == 0` の時，答え = `cnt + cntBA - 1`
