#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> h(n, 0);
    REP(i, n) cin >> h[i];

    int count = 0;
    int sum = accumulate(h.begin(), h.end(), 0);
    while (sum) {
        int l = 0;
        REP(i, n) {
            if (h[i] > 0) {
                l = i;
                break ;
            }
        }

        int r = l;
        for (int i = l + 1; i < n; i++) {
            if (h[i] != 0) r = i;
            else break ;
        }

        for (int i = l; i <= r; i++)
            h[i]--;

        count++;
        sum = accumulate(h.begin(), h.end(), 0);
    }

    cout << count << '\n';
    return 0;
}
