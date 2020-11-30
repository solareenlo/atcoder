#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long C, std::vector<long long> x, std::vector<long long> v){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long C;
    scanf("%lld",&C);
    std::vector<long long> x(N);
    std::vector<long long> v(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, C, std::move(x), std::move(v));
    return 0;
}
