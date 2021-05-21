#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 45)
        cout << 1 << '\n';
    else
        cout << 90/gcd(n, 90) << '\n';
    return 0;
}
