#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long X, std::vector<long long> x){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> x(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
    }
    solve(N, X, std::move(x));
    return 0;
}
