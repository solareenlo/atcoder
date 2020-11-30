#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<std::string> S, std::vector<long long> P){
    long long sum = accumulate(P.begin(), P.end(), 0);
    long long majority = sum / 2;

    int ans = -1;
    REP(i, P.size()) {
        if (P[i] > majority) {
            ans = i;
            break ;
        }
    }
    if (ans != -1) cout << S[ans] << '\n';
    else cout << "atcoder" << '\n';
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
        scanf("%lld",&P[i]);
    }
    solve(N, std::move(S), std::move(P));
    return 0;
}
