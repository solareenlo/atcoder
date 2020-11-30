#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n + 1, 0);
    REP(i, n) cin >> a[i];

    int count = 0;
    REP(i, n) {
        if (i + 1 == a[i]) {
            count++;
            if (i + 2 == a[i + 1])
                i++;
        }
    }

    cout << count << '\n';
    return 0;
}
