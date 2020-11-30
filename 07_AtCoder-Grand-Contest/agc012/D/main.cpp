#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 1000000007;

void solve(long long N, long long X, long long Y, std::vector<long long> c, std::vector<long long> w){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    std::vector<long long> c(N);
    std::vector<long long> w(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&c[i]);
        scanf("%lld",&w[i]);
    }
    solve(N, X, Y, std::move(c), std::move(w));
    return 0;
}
