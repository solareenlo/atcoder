#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> L, std::vector<long long> R){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> L(N);
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
    }
    solve(N, std::move(L), std::move(R));
    return 0;
}
