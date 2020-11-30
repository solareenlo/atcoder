#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b, k, l;
    cin >> a >> b >> k >> l;

    ll ans1 = ((k / l) + 1) * b;
    ll ans2 = (k / l) * b + (k % l) * a;
    ll ans3 = a * k;

    ans1 = min(ans1, ans2);
    ans1 = min(ans1, ans3);
    cout << ans1 << '\n';
    return 0;
}
