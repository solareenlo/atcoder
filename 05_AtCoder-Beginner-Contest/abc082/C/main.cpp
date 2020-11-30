#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, int> a;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    ll ans = 0;
    for (auto i : a) {
        int diff = abs(i.first - i.second);
        if (i.first > i.second) ans += i.second;
        else ans += diff;
    }

    cout << ans << '\n';
    return 0;
}
