#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<multiset<char> > c(n);
    REP(i, n) {
        string s;
        cin >> s;
        REP(j, s.size())
            c[i].insert(s[j]);
    }

    multiset<char> res = c[0];
    REP(i, n) {
        multiset<char> tmp;
        set_intersection(res.begin(), res.end(),
                c[i].begin(), c[i].end(),
                inserter(tmp, tmp.end()));
        res = tmp;
    }

    for_each(res.begin(), res.end(), [](char c) {
            cout << c;
            });
    cout << '\n';
    return 0;
}
