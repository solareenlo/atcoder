#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;

    vector<int> ans;
    if (n == 1) ans.push_back(1);
    else if (n == 2) ans.push_back(2);
    else {
        while (true) {
            int tmp = 0;
            int cnt = 0;
            REP(i, n) {
                tmp += i;
                if (n <= tmp) {
                    cnt = i;
                    break ;
                }
            }
            n -= cnt;
            ans.push_back(cnt);
            if (n == 1) {
                ans.push_back(n);
                break ;
            } else if (n == 2) {
                ans.push_back(n);
                break ;
            }
        }
    }

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << '\n';
    return 0;
}
