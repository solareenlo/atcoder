#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> w, std::vector<long long> h){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> w(N);
    std::vector<long long> h(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&w[i]);
        scanf("%lld",&h[i]);
    }
    solve(N, std::move(w), std::move(h));
    return 0;
}
