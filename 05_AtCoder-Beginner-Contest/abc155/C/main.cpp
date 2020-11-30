#include <iostream>
#include <map>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;

    map<string, int> cnt;
    REP(i, n) {
        string s; cin >> s;
        cnt[s]++;
    }

    int maxi = 0;
    for (auto i : cnt)
        maxi = max(maxi, i.second);

    for (auto i : cnt)
        if (i.second == maxi)
            cout << i.first << '\n';
    return 0;
}
