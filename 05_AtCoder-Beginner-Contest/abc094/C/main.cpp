#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> x(n);
    REP(i, n) cin >> x[i];

    vector<int> tmp(n);
    tmp = x;
    sort(tmp.begin(), tmp.end());

    map<int, int> index;
    REP(i, n)
        index.insert(make_pair(tmp[i], i + 1));

    REP(i, n) {
        if (index[x[i]] <= n / 2) cout << tmp[n / 2] << '\n';
        if (index[x[i]] >= n / 2 + 1) cout << tmp[n / 2 - 1] << '\n';
    }
    return 0;
}
