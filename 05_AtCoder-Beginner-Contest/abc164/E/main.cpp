#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, long long S, std::vector<long long> U, std::vector<long long> V, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long S;
    scanf("%lld",&S);
    std::vector<long long> U(M);
    std::vector<long long> V(M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&U[i]);
        scanf("%lld",&V[i]);
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(N);
    std::vector<long long> D(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, M, S, std::move(U), std::move(V), std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
