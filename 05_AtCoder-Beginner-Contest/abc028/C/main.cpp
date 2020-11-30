#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << max(a + d + e, b + c + e) << '\n';
    return 0;
}
