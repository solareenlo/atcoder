#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    bool ans = false;
    REP(i, 3) if (s[i] == '7') ans = true;
    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
    return 0;
}
