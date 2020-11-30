#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N){
    long long first = 2;
    long long second = 1;
    long long ans = 3;
    REP(i, N - 1) {
        ans = first + second;
        first = second;
        second = ans;
    }
    if (N == 0) cout << 2 << '\n';
    else if (N == 1) cout << 1 << '\n';
    else cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
