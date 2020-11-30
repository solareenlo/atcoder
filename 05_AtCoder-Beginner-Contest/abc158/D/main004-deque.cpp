#include <algorithm>
#include <iostream>
#include <deque>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s; cin >> s;
    deque<char> q;
    for (char c : s) q.push_back(c);

    bool flip = false;
    int n; cin >> n;

    REP(i, n) {
        int t; cin >> t;
        if (t == 1) flip = !flip;
        else {
            int f;
            char c;
            cin >> f >> c;
            if (flip) f = 3 - f;
            if (f == 1) q.push_front(c);
            else q.push_back(c);
        }
    }

    if (flip) reverse(q.begin(), q.end());
    string ans;
    for (auto c : q) ans += c;
    cout << ans << '\n';
    return 0;
}
