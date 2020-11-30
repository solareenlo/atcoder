#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::vector<std::string> S){
    int count = 0;
    REP(i, S.size()) {
        bool ans = false;
        REP(j, S[i].size()) {
            if (S[i][j] == 'r')
                ans = true;
        }
        if (ans) count++;
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::string> S(12);
    for(int i = 0 ; i < 12 ; i++){
        std::cin >> S[i];
    }
    solve(std::move(S));
    return 0;
}
