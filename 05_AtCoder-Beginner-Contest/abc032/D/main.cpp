#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long W, std::vector<long long> v, std::vector<long long> w){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long W;
    scanf("%lld",&W);
    std::vector<long long> v(N);
    std::vector<long long> w(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&v[i]);
        scanf("%lld",&w[i]);
    }
    solve(N, W, std::move(v), std::move(w));
    return 0;
}
