#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> h(n);
    REP(i, n) cin >> h[i];

    bool ans = true;
    int maxi = 0;
    REP(i, n) {
        if (maxi < h[i] - 1) maxi = h[i] - 1;
        if (maxi > h[i]) {
            ans = false;
            break ;
        }
    }

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
