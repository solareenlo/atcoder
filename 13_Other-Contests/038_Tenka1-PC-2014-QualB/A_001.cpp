#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;

    string target = "HAGIYA";
    string replacement = "HAGIXILE";

    string::size_type pos = 0;
    while ((pos = s.find(target, pos)) != string::npos) {
        s.replace(pos, target.length(), replacement);
        pos += replacement.length();
    }

    cout << s << '\n';
    return 0;
}
