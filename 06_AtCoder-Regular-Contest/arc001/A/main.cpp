#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> p;
    REP(i, n) {
        p[s[i]]++;
    }

    int maxi = 0;
    int mini = 101;
    if (p.size() == 1) {
        auto itr = p.begin();
        maxi = itr->second;
        mini = 0;
    } else {
        for (auto i : p) {
            maxi = max(maxi, i.second);
            mini = min(mini, i.second);
        }
    }

    cout << maxi << ' ' << mini << '\n';
    return 0;
}
