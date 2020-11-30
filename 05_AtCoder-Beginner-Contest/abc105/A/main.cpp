#include <iostream>
using namespace std;

void solve(long long N, long long K){
    if (N % K) cout << 1 << '\n';
    else cout << 0 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    solve(N, K);
    return 0;
}
