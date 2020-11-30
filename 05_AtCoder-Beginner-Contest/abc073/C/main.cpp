#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, int> a;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    int ans = 0;
    for (auto i : a) {
        if (i.second % 2)
            ans++;
    }

    cout << ans << '\n';
    return 0;
}
