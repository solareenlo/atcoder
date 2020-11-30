#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int INF = 2002002002;

void solve(long long N, std::string S, std::string T){
    REP(i, N) {
        printf("%c", S[i]);
        printf("%c", T[i]);
    }
    cout << '\n';
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    solve(N, S, T);
    return 0;
}
