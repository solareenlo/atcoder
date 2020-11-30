#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;

    if (n == 1 && m > 2) cout << m - 2 << '\n';
    else if (m == 1 && n > 2) cout << n - 2 << '\n';
    else cout << (n - 2) * (m - 2) << '\n';
    return 0;
}
