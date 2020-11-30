#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    bool ans = true;
    if (a < 1 || a > 9 || b < 1 || b > 9)
        ans = false;

    if (ans) cout << a * b << '\n';
    else cout << -1 << '\n';
    return 0;
}
