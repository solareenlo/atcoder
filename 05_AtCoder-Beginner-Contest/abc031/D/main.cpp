#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long K, long long N, std::vector<long long> v, std::vector<std::string> w){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> v(N);
    std::vector<std::string> w(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&v[i]);
        std::cin >> w[i];
    }
    solve(K, N, std::move(v), std::move(w));
    return 0;
}
