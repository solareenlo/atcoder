#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> Z){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    std::vector<long long> Z(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
        scanf("%lld",&Z[i]);
    }
    solve(N, M, std::move(X), std::move(Y), std::move(Z));
    return 0;
}
