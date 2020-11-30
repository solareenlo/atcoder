#include <algorithm>
#include <iostream>
#include <deque>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s; cin >> s;
    deque<char> deq;
    for (char c : s) deq.push_back(c);

    bool flip = false;
    int q; cin >> q;

    REP(i, q) {
        int t; cin >> t;
        if (t == 1) flip = !flip;
        else {
            int f;
            char c;
            cin >> f >> c;
            if (flip) f = 3 - f;
            if (f == 1) deq.push_front(c);
            else deq.push_back(c);
        }
    }

    if (flip) reverse(deq.begin(), deq.end());
    string ans;
    for (char c : deq) ans += c;
    cout << ans << '\n';
    return 0;
}
