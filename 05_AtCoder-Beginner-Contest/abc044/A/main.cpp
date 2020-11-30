#include <iostream>
using namespace std;

void solve(long long N, long long K, long long X, long long Y){
    if (N > K) cout <<  K * X + (N - K) * Y << '\n';
    else cout << N * X << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    solve(N, K, X, Y);
    return 0;
}
