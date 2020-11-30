# [AtCoder Beginner Contest 171](https://atcoder.jp/contests/abc171)

## [E - Red Scarf](https://atcoder.jp/contests/abc171/tasks/abc171_e)
- 排他的論理和の問題．
- sample から解放への道筋が簡単に導き出せる．
- `全部の排他的論理和 ^ 自分以外の排他的論理和 = 自分`

## [D - Replacing](https://atcoder.jp/contests/abc171/tasks/abc171_d)
- map 関数の添字に2種類の配列を扱うパターン．

## [C - One Quadrillion and One Dalmatians](https://atcoder.jp/contests/abc171/tasks/abc171_c)
- 再帰関数を使う問題．
- 26で割った商が0になるまで，繰り返し `n` を26で割り，商が0になった時の余りを文字列 `s` に追加していく．
- その操作を全ての商に対して行い，文字列 `s` を逆順にしたものが答え．
