#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long C, std::vector<long long> s, std::vector<long long> t, std::vector<long long> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long C;
    scanf("%lld",&C);
    std::vector<long long> s(N);
    std::vector<long long> t(N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&s[i]);
        scanf("%lld",&t[i]);
        scanf("%lld",&c[i]);
    }
    solve(N, C, std::move(s), std::move(t), std::move(c));
    return 0;
}
