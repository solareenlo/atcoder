#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll x, y;
    cin >> x >> y;

    int count = 0;
    while(true) {
        x *= 2;
        count++;
        if (x > y) break ;
    }

    cout << count << '\n';
    return 0;
}
