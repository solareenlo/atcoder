#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string N){
    bool ans = true;
    REP(i, 3)
        if (N[3] != N[i])
            ans = false;
    if (ans) cout << "SAME" << '\n';
    else cout << "DIFFERENT" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string N;
    std::cin >> N;
    solve(N);
    return 0;
}
