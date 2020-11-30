#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    ll k;
    cin >> n >> k;

    map<int, ll> bigArray;
    REP(i, n) {
        int a;
        ll b;
        cin >> a >> b;
        bigArray[a] += b;
    }

    int res = 0;
    for (auto i : bigArray) {
        k -= i.second;
        if (k <= 0) {
            res = i.first;
            break ;
            }
    }

    cout << res << '\n';
    return 0;
}
