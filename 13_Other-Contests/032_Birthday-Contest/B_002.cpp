#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n < 4) cout << -1 << '\n';
    else {
        vector<string> s(n, string(n, '.'));
        if (n%2) s[0][0] = '#';
        for (int i=0; i<n/2; i++) s[i+1][i] = s[i][i+1] = '#';
        for (auto &t : s) cout << t << '\n';
    }
    return 0;
}
