#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string W){
    REP(i, W.size()) {
        if (W[i] == 'a' || W[i] == 'i' || W[i] == 'u' || W[i] == 'e' || W[i] == 'o')
            continue ;
        printf("%c", W[i]);
    }
    cout << '\n';
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    std::string W;
    std::cin >> W;
    solve(W);
    return 0;
}
