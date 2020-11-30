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

    int count = 0;
    int maxi = 0;
    REP(i, n - 1) {
        if (h[i] >= h[i + 1]) count++;
        else count = 0;
        maxi = max(maxi, count);
    }

    cout << maxi << '\n';
    return 0;
}
