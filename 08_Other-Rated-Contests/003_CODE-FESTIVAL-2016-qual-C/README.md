# [CODE FESTIVAL 2016 qual C](https://atcoder.jp/contests/code-festival-2016-qualc)

## [B - K個のケーキ](https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_b)
- 最も多くあるケーキの個数が K/2 個を超えた場合に初めて，隣合うケーキが存在する．
- 最も多くあるケーキの個数が K/2 個を超えた場合，最も多くあるケーキの間に別のケーキを置けば良い．
- ので，答え = `最も多くあるケーキの個数 - 1 - 最も多くあるケーキ以外の個数`
