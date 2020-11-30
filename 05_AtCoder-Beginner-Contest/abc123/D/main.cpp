#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long X, long long Y, long long Z, long long K, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    long long Z;
    scanf("%lld",&Z);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(X);
    for(int i = 0 ; i < X ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(Y);
    for(int i = 0 ; i < Y ; i++){
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(Z);
    for(int i = 0 ; i < Z ; i++){
        scanf("%lld",&C[i]);
    }
    solve(X, Y, Z, K, std::move(A), std::move(B), std::move(C));
    return 0;
}
