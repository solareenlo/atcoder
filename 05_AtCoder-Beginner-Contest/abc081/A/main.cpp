#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int ans = 0;
    REP(i, 3) ans += s[i] - '0';
    cout << ans << '\n';
    return 0;
}
