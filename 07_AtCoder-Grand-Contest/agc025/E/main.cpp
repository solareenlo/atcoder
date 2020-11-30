#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    std::vector<long long> u(M);
    std::vector<long long> v(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, M, std::move(a), std::move(b), std::move(u), std::move(v));
    return 0;
}
