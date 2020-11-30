#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();

    int cntNotA = 0;
    string notA;
    REP(i, n) if (s[i] != 'A') notA.push_back(s[i]);

    bool ok2 = false;
    if (notA == "KIHBR") ok2 = true;

    bool ok = true;
    REP(i, n - 1)
        if (s[i] == 'A' && s[i + 1] == 'A')
            ok = false;

    bool ok3 = true;
    if (s.find("KIH") == std::string::npos) ok3 = false;

    if (ok && ok2 && ok3) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
