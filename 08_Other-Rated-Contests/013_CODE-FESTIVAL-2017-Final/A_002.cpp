#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;

    bool ok = regex_match(s, regex("A?KIHA?BA?RA?"));

    puts(ok ? "YES" : "NO");
    return 0;
}
