#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long C, std::vector<std::vector<long long>> D, std::vector<std::vector<long long>> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long C;
    scanf("%lld",&C);
    std::vector<std::vector<long long>> D(C, std::vector<long long>(C));
    for(int i = 0 ; i < C ; i++){
        for(int j = 0 ; j < C ; j++){
            scanf("%lld",&D[i][j]);
        }
    }
    std::vector<std::vector<long long>> c(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            scanf("%lld",&c[i][j]);
        }
    }
    solve(N, C, std::move(D), std::move(c));
    return 0;
}
