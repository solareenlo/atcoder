#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int ans = 0;
    REP(i, a + 1) REP(j, b + 1) REP(k, c + 1) {
        int sum = 0;
        sum = i * 500 + j * 100 + k * 50;
        if (sum == x) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
