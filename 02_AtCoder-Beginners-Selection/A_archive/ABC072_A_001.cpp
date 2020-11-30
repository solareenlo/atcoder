#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, t;
    cin >> x >> t;

    if (x > t)
        cout << x - t << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
