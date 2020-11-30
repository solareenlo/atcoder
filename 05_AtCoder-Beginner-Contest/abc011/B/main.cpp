#include <iostream>
#include <locale>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S){
    locale l = locale::classic();
    REP(i, S.size()) {
        if (i == 0) cout << toupper(S[i], l);
        else cout << tolower(S[i], l);
    }
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
