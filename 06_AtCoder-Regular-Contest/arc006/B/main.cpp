#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, l;
    cin >> n >> l;
    cin.ignore(); // 次の行に行くために n と l の後ろの改行を読み飛ばしてる

    vector<string> s(22);
    REP(i, l + 1) getline(cin, s[i]);

    int p;
    REP(i, s[l].size())
        if (s[l][i] == 'o') p = i;

    for (int i = l; i--;) {
        if (p - 1 >= 0 && s[i][p - 1] == '-')
            p -= 2;
        else if (p + 1 < s[i].size() && s[i][p + 1] == '-')
            p += 2;
    }

    cout << (p / 2) + 1 << '\n';
    return 0;
}
