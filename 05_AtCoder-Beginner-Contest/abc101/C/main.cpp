#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    if (n == k) cout << 1 << '\n';
    else {
        int ans = 1;
        int tmp = n - k;
        int div = tmp / (k - 1);
        int mod = tmp % (k - 1);
        if (mod) cout << ans + div + 1 << '\n';
        else cout << ans + div << '\n';
    }
    return 0;
}
