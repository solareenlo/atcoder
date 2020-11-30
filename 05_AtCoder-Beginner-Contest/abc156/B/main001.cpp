#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long K){
    int ans = 0;
    REP(i, 31) {
        if (pow(K, i) > N) {
            ans = i;
            break ;
        }
    }
    cout << ans << '\n';
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
