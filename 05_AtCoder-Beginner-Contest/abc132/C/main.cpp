#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> d(n);
    REP(i, n) cin >> d[i];
    sort(d.begin(), d.end());

    int midL = d[d.size() / 2 - 1];
    int midR = d[d.size() / 2];

    int ans = midR - midL;
    cout << ans << '\n';
    return 0;
}
