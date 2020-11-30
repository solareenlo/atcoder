#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    // cout << s << '\n';

    int posI = s.find('I');
    int posC = s.find('C', posI);
    int posT = s.find('T', posC);
    // cout << posI << ' ' << posC << ' ' << posT << '\n';

    if (posI < posC && posC < posT) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
