#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> u, std::vector<long long> v, std::vector<long long> w){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    std::vector<long long> w(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
        scanf("%lld",&w[i]);
    }
    solve(N, std::move(u), std::move(v), std::move(w));
    return 0;
}
