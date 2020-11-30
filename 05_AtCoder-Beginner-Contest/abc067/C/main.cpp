#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    vector<ll> sumL(n + 1, 0);
    REP(i, n) sumL[i + 1] = sumL[i] + a[i];

    reverse(a.begin(), a.end());

    vector<ll> sumR(n + 1, 0);
    REP(i, n) sumR[i + 1] = sumR[i] + a[i];

    reverse(sumR.begin(), sumR.end());

    ll mini = INT_MAX;
    for (int i = 1; i < n; i++)
        mini = min(mini, abs(sumL[i] - sumR[i]));

    cout << mini << '\n';
    return 0;
}
