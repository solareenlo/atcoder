#include <algorithm>
#include <iostream>
#include <utility>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s; cin >> s;
    int q; cin >> q;
    string t;

    REP(i, q) {
        int type;
        cin >> type;
        if (type == 1) swap(s, t);
        else {
            int f;
            char c;
            cin >> f >> c;
            if (f == 1) t += c;
            else s += c;
        }
    }

    reverse(t.begin(), t.end());
    cout << t << s << '\n';
    return 0;
}
