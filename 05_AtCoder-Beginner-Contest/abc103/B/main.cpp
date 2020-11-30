#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S, std::string T){
    bool ans = false;
    REP(i, S.size()) {
        string s1 = S.substr(0, i);
        string s2 = S.substr(i);
        if (s2 + s1 == T) {
            ans = true;
            break ;
        }
    }
    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    solve(S, T);
    return 0;
}
