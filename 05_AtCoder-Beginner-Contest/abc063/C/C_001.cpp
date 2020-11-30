#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> s(n);
    REP(i, n) cin >> s[i];

    sort(s.begin(), s.end());
    int sum = accumulate(s.begin(), s.end(), 0);

    vector<int> div(n);
    int cnt = 0;
    REP(i, n) {
        div[i] = s[i] % 10;
        if (div[i] == 0) cnt++;
    }

    int sumDiv = accumulate(div.begin(), div.end(), 0);

    int ans = 0;
    if (sumDiv % 10) ans = sum;
    else {
        if (cnt == n) ans = 0;
        else {
            REP(i, n) {
                if (div[i] != 0) {
                    ans = sum - s[i];
                    break ;
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
