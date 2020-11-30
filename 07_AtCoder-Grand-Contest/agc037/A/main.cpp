#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();

    string tmp, tmp2;
    tmp.push_back(s[0]);
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        tmp2.push_back(s[i]);
        if (tmp != tmp2) {
            cnt++;
            tmp = tmp2;
            tmp2.clear();
        }
    }

    cout << cnt + 1 << '\n';
    return 0;
}
