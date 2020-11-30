#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, l;
    cin >> n >> l;
    string s;
    cin >> s;

    int cnt = 0;
    int tab = 1;
    REP(i, n) {
        if (s[i] == '+') tab++;
        if (s[i] == '-' && tab >= 0) tab--;
        if (tab > l) {
            cnt++;
            tab = 1;
        }
    }

    cout << cnt << '\n';
    return 0;
}
