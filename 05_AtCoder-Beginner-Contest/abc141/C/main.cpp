#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> p(n, 0);

    REP(i, q) {
        int tmp;
        cin >> tmp;
        tmp--;
        p[tmp]++;
    }

    REP(i, n) {
        if (k + p[i] - q > 0) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}
