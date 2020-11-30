#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> d, std::vector<long long> x, std::vector<long long> y, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    std::vector<long long> c(N-1);
    std::vector<long long> d(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
        scanf("%lld",&c[i]);
        scanf("%lld",&d[i]);
    }
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    std::vector<long long> u(Q);
    std::vector<long long> v(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, Q, std::move(a), std::move(b), std::move(c), std::move(d), std::move(x), std::move(y), std::move(u), std::move(v));
    return 0;
}
