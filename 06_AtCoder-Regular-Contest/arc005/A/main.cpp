#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 0;
    REP(i, n) {
        string w;
        cin >> w;
        if (w[w.size() - 1] == '.') w.erase(w.end() - 1);
        if (w == "TAKAHASHIKUN") cnt++;
        if (w == "Takahashikun") cnt++;
        if (w == "takahashikun") cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
