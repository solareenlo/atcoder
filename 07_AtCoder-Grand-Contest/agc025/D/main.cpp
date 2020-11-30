#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> D){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> D(2);
    for(int i = 0 ; i < 2 ; i++){
        scanf("%lld",&D[i]);
    }
    solve(N, std::move(D));
    return 0;
}
