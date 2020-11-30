#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long K, long long L, std::vector<long long> p, std::vector<long long> q, std::vector<long long> r, std::vector<long long> s){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    long long L;
    scanf("%lld",&L);
    std::vector<long long> p(K);
    std::vector<long long> q(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&p[i]);
        scanf("%lld",&q[i]);
    }
    std::vector<long long> r(L);
    std::vector<long long> s(L);
    for(int i = 0 ; i < L ; i++){
        scanf("%lld",&r[i]);
        scanf("%lld",&s[i]);
    }
    solve(N, K, L, std::move(p), std::move(q), std::move(r), std::move(s));
    return 0;
}
