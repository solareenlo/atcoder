#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> s(m), c(m);
    REP(i, m) cin >> s[i] >> c[i];

    REP(i, 1000) {
        // (a) 候補の数字を一文字ずつ vector d に入れてる
        int x = i / 10;
        vector<int> d(1, i % 10);
        while (x) {
            d.push_back(x % 10);
            x /= 10;
        }
        reverse(d.begin(), d.end());
        // (a) ここまで
        if (d.size() != n) continue ;

        bool ok = true;
        REP(i, m) if (d[s[i] - 1] != c[i]) ok = false;
        if (ok) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
    return 0;
}
