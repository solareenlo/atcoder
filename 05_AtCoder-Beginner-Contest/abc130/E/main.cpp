#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 1000000007;

void solve(long long N, long long M, std::vector<long long> S, std::vector<long long> T){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&S[i]);
    }
    std::vector<long long> T(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&T[i]);
    }
    solve(N, M, std::move(S), std::move(T));
    return 0;
}
