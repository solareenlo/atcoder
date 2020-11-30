#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    map<int, int> a;
    REP(i, n) {
        int tmp; cin >> tmp;
        a[tmp]++;
    }

    int cntMaxi = 0;
    int point = -1;
    for (auto x : a) {
        if (cntMaxi < x.second) {
            cntMaxi = x.second;
            point = x.first;
        }
    }

    if (point == -1) cout << '?' << '\n';
    else if (n % 2 == 0 && a.size() == 2) {
        auto itr = a.begin();
        int l = itr->second;
        itr++;
        int r = itr->second;
        if (l == r) cout << '?' << '\n';
        else cout << point << '\n';
    } else {
        if (cntMaxi > n / 2) cout << point << '\n';
        else cout << '?' << '\n';
    }
    return 0;
}
