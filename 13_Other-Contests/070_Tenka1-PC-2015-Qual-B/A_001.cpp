#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int first = 100;
    int second = 100;
    int third = 200;
    int ans = 0;
    REP(i, 17) {
        ans = first + second + third;
        first = second;
        second = third;
        third = ans;
    }

    cout << ans << '\n';
    return 0;
}
