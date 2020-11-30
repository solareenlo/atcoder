#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int D = 60; // 2の60乗まででダブリングの表が足りるので60．
const int MAX_N = 200010;
int to[D][MAX_N];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;

    REP(i, n) {
        cin >> to[0][i];
        to[0][i]--;
    }

    // ダブリングの表をセットする
    REP(i, D - 1) REP(j, n) {
        to[i + 1][j] = to[i][to[i][j]];
    }

    // k を2の指数表記で分解して，
    // 指数の大きい方から辿っていく．
    int v = 0;
    for (int i = D - 1; i >= 0; i--) {
        long long l = 1ll << i;
        if (l <= k) {
            v = to[i][v];
            k -= l;
        }
    }

    cout << v + 1 << '\n';
    return 0;
}
