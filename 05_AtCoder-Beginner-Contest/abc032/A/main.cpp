#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long a, long long b, long long n){
    REP(i, 20001) {
        long long ans = n + i;
        if (ans % a == 0 && ans % b == 0) {
            cout << ans << '\n';
            break ;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long n;
    scanf("%lld",&n);
    solve(a, b, n);
    return 0;
}
