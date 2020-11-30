#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int ans = 0;
    REP(i, n) {
        if (x & (1 << i))
            ans += a[i];
    }
    cout << ans << '\n';
    return 0;
}
