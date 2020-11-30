#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (long long i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long K, std::vector<long long> l){
    sort(l.begin(), l.end(), greater<long long>());

    long long ans = 0;
    REP(i, K)
        ans += l[i];

    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> l(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&l[i]);
    }
    solve(N, K, std::move(l));
    return 0;
}
