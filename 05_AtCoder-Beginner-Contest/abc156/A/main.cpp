#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long R){
    if (N >= 10) cout << R << '\n';
    else {
        long long  ans;
        ans = R + 100 * (10 - N);
        cout << ans << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long R;
    scanf("%lld",&R);
    solve(N, R);
    return 0;
}
