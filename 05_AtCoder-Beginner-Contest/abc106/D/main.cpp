#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, long long Q, std::vector<long long> L, std::vector<long long> R, std::vector<long long> p, std::vector<long long> q){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> L(M);
    std::vector<long long> R(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
    }
    std::vector<long long> p(Q);
    std::vector<long long> q(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&p[i]);
        scanf("%lld",&q[i]);
    }
    solve(N, M, Q, std::move(L), std::move(R), std::move(p), std::move(q));
    return 0;
}
