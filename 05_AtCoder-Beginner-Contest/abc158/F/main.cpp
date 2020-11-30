#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 998244353;

void solve(long long N, std::vector<long long> X, std::vector<long long> D){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> X(N);
    std::vector<long long> D(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, std::move(X), std::move(D));
    return 0;
}
