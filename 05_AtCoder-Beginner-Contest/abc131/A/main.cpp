#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S){
    bool ans = true;
    REP(i, S.size() - 1) {
        if (S[i] == S[i + 1]) {
            ans = false;
            break ;
        }
    }
    if (ans) cout << "Good" << '\n';
    else cout << "Bad" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
