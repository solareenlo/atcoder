#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long K, long long S){
    int ans = 0;
    REP(i, K + 1) REP(j, K + 1) {
        int z = S - i - j;
        if (z >= 0 && z <= K) ans++;
    }
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    long long S;
    scanf("%lld",&S);
    solve(K, S);
    return 0;
}
