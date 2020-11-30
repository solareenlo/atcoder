#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::string S){
    REP(i, S.size()) {
        if (S[i] + (int)N <= 'Z')
            printf("%c", S[i] + (int)N);
        else
            printf("%c", S[i] + (int)N - 26);
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
    solve(N, S);
    return 0;
}
