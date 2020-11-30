#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;

    vector<pair<int, int> > s;
    REP(i, n) {
        int tmp; cin >> tmp;
        s.push_back(make_pair(tmp, i + 1));
    }
    sort(s.begin(), s.end());

    REP(i, n) {
        cout << s[i].second;
        if (i != n - 1) cout << ' ';
    }
    cout << '\n';
    return 0;
}
