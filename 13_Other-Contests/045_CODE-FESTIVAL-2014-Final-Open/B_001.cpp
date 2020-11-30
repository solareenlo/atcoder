#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();

    int sum = 0;
    REP(i, n) {
        if (i % 2) sum -= s[i] - '0';
        else sum += s[i] - '0';
    }

    cout << sum << '\n';
    return 0;
}
