# C++ 入門 AtCoder Programming Guide for beginners (APG4b)
- AtCoder で行える C++ 初心者用の練習問題．
- https://atcoder.jp/contests/APG4b/tasks

## 競プロ用に mac に標準ライブラリを1行で一括で include する方法
### 方法その１
以下から stdc++.h を bits ディレクトリにダウンロードしてから include する．
- https://github.com/gcc-mirror/gcc/blob/master/libstdc%2B%2B-v3/include/precompiled/stdc%2B%2B.h

```bash
mkdir bits
cd bits
curl -O https://raw.githubusercontent.com/gcc-mirror/gcc/master/libstdc%2B%2B-v3/include/precompiled/stdc%2B%2B.h
```

そして，C++ のソースコードのヘッダーに以下を付け加える．

```cpp
#include "bits/stdc++.h"
```

## References
### EX22
- [pairのsecondを基準にソート](https://perogram.hateblo.jp/entry/2018/12/17/045943)

### EX23
- [How to sort a map by value in C++](https://www.educative.io/edpresso/how-to-sort-a-map-by-value-in-cpp)
