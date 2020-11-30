#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int P, Q, R;
    cin >> P >> Q >> R;
    cout << P + Q + R - max({P, Q, R}) << '\n';
    return 0;
}
