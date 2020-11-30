#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;

    multiset<int> d;
    REP(i, n) {
        int tmp; cin >> tmp;
        d.insert(tmp);
    }

    int m; cin >> m;

    multiset<int> t;
    REP(i, m) {
        int tmp; cin >> tmp;
        t.insert(tmp);
    }

    multiset<int> res;
    set_intersection(d.begin(), d.end(),
            t.begin(), t.end(),
            inserter(res, res.end()));

    if (t == res) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
