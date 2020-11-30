#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n;
    cin >> n;

    string s = "";
    while (n) {
        n--;
        s += 'a' + (n % 26);
        n /= 26;
    }

    reverse(s.begin(), s.end());
    cout << s << '\n';
    return 0;
}
