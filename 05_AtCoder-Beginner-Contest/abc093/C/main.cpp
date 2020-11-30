#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> num(3);
    REP(i, 3) cin >> num[i];
    sort(num.begin(), num.end());

    int diff = num[2] - num[0] + num[2] - num[1];
    if (diff % 2) cout << diff / 2 + 2 << '\n';
    else cout << diff / 2 << '\n';
    return 0;
}
