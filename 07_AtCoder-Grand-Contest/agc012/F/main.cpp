#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 1000000007;

void solve(long long N, std::vector<long long> a){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(2*N-1);
    for(int i = 0 ; i < 2*N-1 ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
