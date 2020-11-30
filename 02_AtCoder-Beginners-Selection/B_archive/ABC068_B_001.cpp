#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }

    int ans[6] = {2, 4, 8, 16, 32, 64};
    int index = lower_bound(ans, ans + 6, n + 1) - ans;
    cout << ans[index - 1] << '\n';
    return 0;
}
