#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> l, r;
    if (n % 2) {
        REP(i, n) {
            int tmp;
            cin >> tmp;
            if (i % 2) r.push_back(tmp);
            else l.push_back(tmp);
        }
    } else {
        REP(i, n) {
            int tmp;
            cin >> tmp;
            if (i % 2) l.push_back(tmp);
            else r.push_back(tmp);
        }
    }

    reverse(l.begin(), l.end());
    l.insert(l.end(), r.begin(), r.end());
    REP(i, l.size()) {
        cout << l[i];
        if (i != l.size() - 1) cout << ' ';
    }
    cout << '\n';
    return 0;
}
