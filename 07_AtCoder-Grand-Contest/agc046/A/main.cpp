#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x;
    cin >> x;

    cout << 360 / gcd(x, 360) << endl;
    return 0;
}
