#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string S, long long T){
    int x = 0, y = 0;
    int countQ = 0;
    REP(i, S.size()) {
        if (S[i] == '?') {
            countQ++;
            continue ;
        }
        if (S[i] == 'U') y += 1;
        if (S[i] == 'D') y -= 1;
        if (S[i] == 'R') x += 1;
        if (S[i] == 'L') x -= 1;
    }

    long long ans = abs(x) + abs(y);
    if (T == 1) cout << ans + countQ << '\n';
    else {
        if (countQ <= ans) cout << ans - countQ << '\n';
        else cout << (countQ - ans) % 2 << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    long long T;
    std::cin >> T;
    solve(S, T);
    return 0;
}
