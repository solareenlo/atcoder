#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N){
    int ans = 0;
    double s = sqrt(1000000000);
    REP(i, (int)s + 2) {
        if (i * i == N) {
            ans = N;
            break ;
        }
        else if (i * i > N) {
            ans = pow(i - 1, 2);
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
    solve(N);
    return 0;
}
