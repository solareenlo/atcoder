#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b, long long Q, std::vector<long long> v, std::vector<long long> d, std::vector<long long> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> v(Q);
    std::vector<long long> d(Q);
    std::vector<long long> c(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&v[i]);
        scanf("%lld",&d[i]);
        scanf("%lld",&c[i]);
    }
    solve(N, M, std::move(a), std::move(b), Q, std::move(v), std::move(d), std::move(c));
    return 0;
}
