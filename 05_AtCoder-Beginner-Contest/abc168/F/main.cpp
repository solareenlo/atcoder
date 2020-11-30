#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D, std::vector<long long> E, std::vector<long long> F){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
        scanf("%lld",&C[i]);
    }
    std::vector<long long> D(M);
    std::vector<long long> E(M);
    std::vector<long long> F(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&D[i]);
        scanf("%lld",&E[i]);
        scanf("%lld",&F[i]);
    }
    solve(N, M, std::move(A), std::move(B), std::move(C), std::move(D), std::move(E), std::move(F));
    return 0;
}
