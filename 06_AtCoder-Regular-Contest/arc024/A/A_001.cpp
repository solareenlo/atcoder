#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int L, R;
    cin >> L >> R;

    multiset<int> l, r;
    REP(i, L) {
        int tmp;
        cin >> tmp;
        l.insert(tmp);
    }
    REP(i, R) {
        int tmp;
        cin >> tmp;
        r.insert(tmp);
    }

    multiset<int> res;
    set_intersection(l.begin(), l.end(),
            r.begin(), r.end(),
            inserter(res, res.end()));

    cout << res.size() << '\n';
    return 0;
}
