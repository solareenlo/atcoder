#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int ans = 100;
    while (k > 0) {
        if (a % ans == 0 && b % ans == 0)
            k--;
        ans--;
    }

    cout << ans + 1 << '\n';
    return 0;
}
