# [DISCO presents ディスカバリーチャンネル コードコンテスト2020 予選](https://atcoder.jp/contests/ddcc2020-qual/tasks)

## [C - Strawberry Cakes](https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_c)
- 実装 の問題．
- 苺の番号を横に伸ばして，縦に伸ばすと答えになる．

## [B - Iron Bar Cutting](https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_b)
- 累積和を用いる問題．
- 累積和が全部の合計の半分を超えたところのインデックスか，
    - それの1つ前のインデックスのところまでの左右の合計を計算して，
    - その左右の合計の差の絶対値が小さい方が答え．
- 下記のコードの累積和の添字は 1 からスタートした数え方になっている．
    ```c++
    int N; cin >> N; // 配列サイズ
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i]; // a の入力

    // 累積和
    vector<int> s(N+1, 0); // s[0] = 0 になる
    for (int i = 0; i < N; ++i) s[i+1] = s[i] + a[i];
    ```
