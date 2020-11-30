#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<ll, int> a;
    REP(i, n) {
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }

    ll w = 0;
    ll h = 0;
    for (auto itr = a.rbegin(); itr != a.rend(); itr++) {
        if (itr->second >= 2 && h == 0) {
            h = itr->first;
            if (itr->second - 2 >= 2) {
                w = itr->first;
                break ;
            }
        } else if (h != 0 && itr->second >= 2) {
            w = itr->first;
            break ;
        }
    }

    cout << w * h << '\n';
    return 0;
}
