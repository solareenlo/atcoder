#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> t, std::vector<long long> v){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> t(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&t[i]);
    }
    std::vector<long long> v(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&v[i]);
    }
    solve(N, std::move(t), std::move(v));
    return 0;
}
