#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> x(m), y(m);
    REP(i, m) cin >> x[i] >> y[i];
    REP(i, m) {
        x[i]--;
        y[i]--;
    }

    map<int, bool> box;
    REP(i, n) box[i] = false;
    box[0] = true;

    map<int, int> cnt;
    REP(i, n) cnt[i]++;

    REP(i, m) {
        cnt[x[i]]--;
        cnt[y[i]]++;
        if(box[x[i]]) {
            box[y[i]] = true;
            if (cnt[x[i]] <= 0)
                box[x[i]] = false;
        }
    }

    int ans = 0;
    REP(i, n)
        if (box[i] == true)
            ans++;

    cout << ans << '\n';
    return 0;
}
