#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long K, std::vector<long long> t, std::vector<long long> d){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> t(N);
    std::vector<long long> d(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&t[i]);
        scanf("%lld",&d[i]);
    }
    solve(N, K, std::move(t), std::move(d));
    return 0;
}
