#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;

    int num = 1;
    int count = 0;
    REP(i, n) {
        int tmp; cin >> tmp;
        if (num == tmp) {
            num++;
            count++;
        }
    }

    if (count == 0) cout << -1 << '\n';
    else cout << n - count << '\n';
    return 0;
}
