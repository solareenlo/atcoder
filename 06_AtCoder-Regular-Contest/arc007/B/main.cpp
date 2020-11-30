#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> cdCase(n);
    REP(i, n) cdCase[i] = i + 1;

    int cdPlayer = 0;
    REP(i, m) {
        int tmp;
        cin >> tmp;
        REP(j, n) {
            if (cdCase[j] == tmp) {
                cdCase[j] = cdPlayer;
                cdPlayer = tmp;
                break ;
            }
        }
    }

    REP(i, n) cout << cdCase[i] << '\n';
    return 0;
}
