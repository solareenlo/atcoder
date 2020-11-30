#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    if ((a < c && b > c) || (a > c && b < c)) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
