#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> d(n);
    REP(i, n) cin >> d[i];

    sort(d.begin(), d.end());

    int maxi = accumulate(d.begin(), d.end(), 0);

    int mini;
    if (d.size() == 0) mini = 0;
    else {
        mini = max(0, d[n - 1] - (maxi - d[n - 1]));
    }

    cout << maxi << '\n';
    cout << mini << '\n';
    return 0;
}
