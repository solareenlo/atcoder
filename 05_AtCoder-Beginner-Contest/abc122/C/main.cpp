#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<int> ac(n, 0);
    int cnt = 0;
    REP(i, n - 1) {
        ac[i] = cnt;
        if (s[i] == 'A' && s[i + 1] == 'C')
            cnt++;
    }
    ac[n - 1] = cnt;

    REP(i, q) {
        int l, r;
        cin >> l >> r;
        cout << ac[r - 1] - ac[l - 1] << '\n';
    }
    return 0;
}
