#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string n;
    cin >> n;
    if (n[0] == n[1] && n[1] == n[2]) cout << n << '\n';
    else {
        string tmp;
        REP(i, 3)
            tmp.push_back(n[0]);
        if (tmp > n) cout << tmp << '\n';
        else {
            string ans;
            REP(i, 3)
                ans.push_back(n[0] + 1);
            cout << ans << '\n';
        }
    }
    return 0;
}
