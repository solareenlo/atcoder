// 相互再帰はプログラムの動作が複雑になるが，
// 通常の再帰関数と同様に
// 「再帰呼出しの連鎖に終わりがある」という条件を満たしていれば動作する．
#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool is_even(int);
bool is_odd(int);

bool is_even(int n) {
    if (n == 0)
        return true;
    return is_odd(n - 1);
}

bool is_odd(int n) {
    if (n == 0)
        return false;
    return is_even(n - 1);
}

int main(void) {
    for (int i = 0; i < 10; i++)
        cout << i << ' ' << is_even(i) << ' ' << is_odd(i) << endl;
    return 0;
}
