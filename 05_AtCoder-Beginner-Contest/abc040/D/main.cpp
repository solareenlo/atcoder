#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b, std::vector<long long> y, long long Q, std::vector<long long> v, std::vector<long long> w){

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
    std::vector<long long> y(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
        scanf("%lld",&y[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> v(Q);
    std::vector<long long> w(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&v[i]);
        scanf("%lld",&w[i]);
    }
    solve(N, M, std::move(a), std::move(b), std::move(y), Q, std::move(v), std::move(w));
    return 0;
}
