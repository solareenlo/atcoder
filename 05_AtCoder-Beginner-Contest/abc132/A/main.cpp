#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S){
    set<char> c;
    REP(i, 4) c.insert(S[i]);
    bool ans = true;
    if (c.size() != 2) ans = false;
    else if (S[0] == S[1] && S[1] == S[2]) ans = false;
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
