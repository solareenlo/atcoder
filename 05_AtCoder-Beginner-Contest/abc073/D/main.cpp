#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, long long R, std::vector<long long> r, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long R;
    scanf("%lld",&R);
    std::vector<long long> r(R);
    for(int i = 0 ; i < R ; i++){
        scanf("%lld",&r[i]);
    }
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> C(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
        scanf("%lld",&C[i]);
    }
    solve(N, M, R, std::move(r), std::move(A), std::move(B), std::move(C));
    return 0;
}
