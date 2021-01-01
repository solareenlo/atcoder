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

    vector<int> b(n);
    b = a;
    sort(b.begin(), b.end());

    REP(i, n) {
        if (a[i] == b[n - 1]) cout << b[n - 2] << '\n';
        else cout << b[n - 1] << '\n';
    }
    return 0;
}
