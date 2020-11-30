#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    REP(i, n) cin >> h[i];
    sort(h.begin(), h.end());

    vector<ll> sum(n, 0);
    REP(i, n - 1)
        sum[i + 1] = sum[i] + abs(h[i] - h[i + 1]);

    ll mini = LONG_MAX;
    int ansIndex = 0;
    for (int i = k - 1; i < n; i++) {
        ll diff = h[i] - h[i - (k - 1)];
        if (mini > diff) {
            mini = diff;
            ansIndex = i;
        }
    }

    cout << h[ansIndex] - h[ansIndex - (k - 1)] << '\n';
    return 0;
}
