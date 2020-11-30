#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();

    int b;
    cin >> b;

    int rem = b % n;

    if (rem) cout << s[rem - 1] << '\n';
    else cout << s[n - 1] << '\n';
    return 0;
}
