#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();

    bool ok = true;
    if (n < 4) ok = false;
    else {
        if (s.substr(0, 4) == "YAKI") ok = true;
        else ok = false;
    }

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
