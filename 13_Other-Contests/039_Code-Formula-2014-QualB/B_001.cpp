#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();

    reverse(s.begin(), s.end());

    int sumE = 0;
    int sumO = 0;
    REP(i, n) {
        if (i % 2) sumO += s[i] - '0';
        else sumE += s[i] - '0';
    }

    cout << sumO << ' ' << sumE << '\n';
    return 0;
}
