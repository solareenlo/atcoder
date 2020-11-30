#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M_a, long long M_b, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M_a;
    scanf("%lld",&M_a);
    long long M_b;
    scanf("%lld",&M_b);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
        scanf("%lld",&c[i]);
    }
    solve(N, M_a, M_b, std::move(a), std::move(b), std::move(c));
    return 0;
}
