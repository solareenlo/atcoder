#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string key = "keyence";
    string s; cin >> s;

    bool ok = false;
    auto pos = s.find(key);
    if (pos == string::npos) {
        REP(i, key.size()) {
            string l = key.substr(0, i + 1);
            string r = key.substr(i + 1, key.size() - 1);
            auto posL = s.find(l);
            auto posR = s.rfind(r);
            if (posL == 0 && posR == s.size() - r.size())
                ok = true;
        }
    } else {
        auto posL = s.find(key);
        auto posR = s.find(key);
        if (posL == 0 || posR == (s.size() - key.size()))
            ok = true;
    }

    if (ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
