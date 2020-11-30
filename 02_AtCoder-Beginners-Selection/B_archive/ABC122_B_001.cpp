#include <algorithm>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int maxi = 0;
    int count = 0;
    REP(i, s.size()) {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
            count++;
        else
            count = 0;
        maxi = max(maxi, count);
    }

    cout << maxi << '\n';
    return 0;
}
