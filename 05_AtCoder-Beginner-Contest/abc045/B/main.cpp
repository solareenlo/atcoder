#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string s[3];
    REP(i, 3) cin >> s[i];

    int i = 0;
    while (s[i].size() > 0) {
        int j = s[i][0] - 'a';
        s[i].erase(0, 1);
        i = j;
    }

    cout << (char)('A' + i) << '\n';
    return 0;
}
