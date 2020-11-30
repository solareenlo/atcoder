#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S){
    bool ans = true;
    string tmp = S.substr(2, S.size() - 3 + 1 - 2 + 1);
    int countC = 0;
    REP(i, tmp.size())
        if (tmp[i] == 'C') countC++;
    if (S[0] != 'A') ans = false;
    else if (countC != 1) ans = false;
    else {
        S.erase(0, 1);
        S.erase(S.find("C"), 1);
        REP(i, S.size())
            if (!(islower(S[i]))) ans = false;
    }

    if (ans) cout << "AC" << '\n';
    else cout << "WA" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
