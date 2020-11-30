#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;

    vector<int> a(n);
    REP(i, n) a[i] = s[i] % 3;

    vector<int> count(3, 0);
    REP(i, n) count[a[i]]++;

    long long ans = 1;
    REP(i, 3) ans *= count[i];

    REP(j, n) REP(i, j) {
        int k = j + (j - i);
        if (k < n) {
            if (a[i] == a[j]) continue ;
            if (a[j] == a[k]) continue ;
            if (a[k] == a[i]) continue ;
            ans--;
        }
    }

    cout << ans << '\n';
    return 0;
}
