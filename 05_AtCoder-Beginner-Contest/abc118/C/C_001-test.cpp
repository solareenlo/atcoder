#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    auto result = find(a.begin(), a.end(), 1);
    if (result == a.end()) {
        sort(a.begin(), a.end());

        int cnt = 1;
        REP(i, n - 1)
            if (a[i + 1] % a[0] == 0) cnt++;
        if (cnt == n) {
            cout << a[0] << '\n';
            return 0;
        }

        cnt = 0;
        REP(i, n - 1)
            if (a[i] == a[i + 1]) cnt++;
        if (cnt == n) {
            cout << a[0] << '\n';
            return 0;
        }
    } else {
        cout << 1 << '\n';
    }
    return 0;
}
