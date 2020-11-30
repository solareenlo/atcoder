#include <iostream>
#include <vector>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

inline int sumOrder(int n) {
    if (n == 0) {
        return 0;
    }
    return sumOrder(n / 10) + (n % 10);
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    REP(i, n + 1) {
        int tmp = sumOrder(i);
        if (tmp >= a && tmp <= b) {
            ans += i;
        }
    }

    cout << ans << '\n';
    return 0;
}
