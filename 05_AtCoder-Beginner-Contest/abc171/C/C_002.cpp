#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s;

inline void rec(ll n) {
    if (n / 26 == 0) {
        char c = 'a' + (n % 26);
        s += c;
        return ;
    }
    rec(n % 26);
    rec(n / 26 - 1);
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    ll n; cin >> n;
    n--;

    rec(n);
    reverse(s.begin(), s.end());
    cout << s << '\n';
    return 0;
}
