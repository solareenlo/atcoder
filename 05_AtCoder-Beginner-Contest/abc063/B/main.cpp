#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "yes";
const string NO = "no";

void solve(std::string S){
    set<char> str;
    REP(i, S.size())
        str.insert(S[i]);
    if (S.size() == str.size()) cout << YES << '\n';
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
