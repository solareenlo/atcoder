#include <iostream>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<std::string> W){
    bool ans = true;
    set<string> word;
    REP(i, N) word.insert(W[i]);
    if (word.size() != N) ans = false;
    else {
        REP(i, N) {
            if (i == N - 1) continue ;
            if (W[i][W[i].size() - 1] != W[i + 1][0]) ans = false;
        }
    }
    if (ans) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::vector<std::string> W(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> W[i];
    }
    solve(N, std::move(W));
    return 0;
}
