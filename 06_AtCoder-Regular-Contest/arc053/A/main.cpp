#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int h, w;
    cin >> h >> w;
    cout << h * (w - 1) + (h - 1) * w << '\n';
    return 0;
}
