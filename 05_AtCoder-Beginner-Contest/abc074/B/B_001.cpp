#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long K, std::vector<long long> x){
    int sum = 0;
    REP(i, N)
        sum += min(K - x[i], x[i]) * 2;
    cout << sum << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> x(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
    }
    solve(N, K, std::move(x));
    return 0;
}
