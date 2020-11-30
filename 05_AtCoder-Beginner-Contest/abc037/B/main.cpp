#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long Q, std::vector<long long> L, std::vector<long long> R, std::vector<long long> T){
    vector<long long > ans(N);
    REP(i, Q) {
        for (long long j = L[i]; j <= R[i]; j++)
            ans[j - 1] = T[i];
    }
    REP(i, N) cout << ans[i] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    std::vector<long long> T(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
        scanf("%lld",&T[i]);
    }
    solve(N, Q, std::move(L), std::move(R), std::move(T));
    return 0;
}
