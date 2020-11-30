#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0;          // l: o
    ll r = 1000000001; // r: x

    auto digit = [](ll num) { // ラムダ式
        int count = 0;
        while (num) {
            num /= 10;
            count++;
        }
        return count;
    };

    auto f = [&](ll num) { // & を付けるとスコープ外の変数も参照できる
        return a * num + b * digit(num);
    };

    while (r - l > 1) {
        ll mid = (l + r) / 2;
        if (f(mid) <= x) l = mid;
        else r = mid;
    }

    cout << l << '\n';
    return 0;
}
