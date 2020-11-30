#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> num(3);
    REP(i, 3) cin>> num[i];
    sort(num.begin(), num.end());

    int ans = 0;
    if (abs(num[0] - num[1]) % 2 == 0) {
        ans += abs(num[0] - num[1]) / 2;
        if (num[0] < num[1]) num[0] = num[1];
        else num[1] = num[0];
        cout << ans + (num[2] - num[0]) << '\n';
        return 0;
    } else if (abs(num[1] - num[2]) % 2 == 0) {
        ans += abs(num[1] - num[2]) / 2;
        if (num[1] < num[2]) num[1] = num[2];
        else num[2] = num[1];
        if ((num[2] - num[0]) % 2 == 0) {
            cout << ans + (num[2] - num[0]) / 2 << '\n';
            return 0;
        } else {
            cout << ans + (num[2] - num[0]) / 2 + 2 << '\n';
            return 0;
        }
    } else if (abs(num[2] - num[0]) % 2 == 0) {
        ans += abs(num[2] - num[0]) / 2;
        if (num[2] < num[0]) num[2] = num[0];
        else num[0] = num[2];
        if ((num[2] - num[1]) % 2 == 0) {
            cout << ans + (num[2] - num[1]) / 2 << '\n';
            return 0;
        } else {
            cout << ans + (num[2] - num[1]) / 2 + 2 << '\n';
            return 0;
        }
    }
    cout << ans << '\n';
    return 0;
}
