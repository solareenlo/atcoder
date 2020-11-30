#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int ans = 1;
    int first = 0;
    int second = 1;
    REP(i, n) {
        ans = first + second;
        first = second;
        second = ans;
    }

    cout << ans << '\n';
    return 0;
}
