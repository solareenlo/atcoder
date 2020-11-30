#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S){
    string s1 = S.substr(0, S.size()/2);
    string s2 = S.substr(S.size()/2 + 1);
    bool ans = true;
    REP(i, s1.size())
        if (s1[i] != s2[i]) ans = false;
    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
