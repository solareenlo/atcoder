#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long D, long long A, std::vector<long long> X, std::vector<long long> H){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    long long A;
    scanf("%lld",&A);
    std::vector<long long> X(N);
    std::vector<long long> H(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&H[i]);
    }
    solve(N, D, A, std::move(X), std::move(H));
    return 0;
}
