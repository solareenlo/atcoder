#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

int main() {
    map<string, int> str;

    int n;
    cin >> n;
    REP(i, n) {
        string s;
        cin >> s;
        str.insert(make_pair(s, 0));
        str[s]++;
    }

    int m;
    cin >> m;
    REP(i, m) {
        string t;
        cin >> t;
        str.insert(make_pair(t, 0));
        str[t]--;
    }

    int ans = 0;
    for (auto i : str)
        chmax(ans, i.second);

    if (ans < 0) cout << 0 << '\n';
    else cout << ans << '\n';
    return 0;
}
