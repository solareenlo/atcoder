#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    a--; b--; c--; d--;
    string s;
    cin >> s;

    int mini = min(a, b);
    int maxi = max(c, d);

    bool ok = true;
    for(int i = mini; i < maxi - 1; i++)
        if (s[i] == '#' && s[i + 1] == '#') {
            ok = false;
            break ;
        }

    if (ok) {
        if (c > d) {
            bool okD = false;
            for (int i = b - 1; i < d; i++)
                if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                    okD = true;
                    break ;
                }
            if (!okD) ok = false;
        }
    }

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
