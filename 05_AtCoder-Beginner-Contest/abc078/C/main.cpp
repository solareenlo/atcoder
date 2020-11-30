#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int ans = (1900 * m + 100 * (n - m)) * pow(2, m);
    cout << ans << '\n';
    return 0;
}
