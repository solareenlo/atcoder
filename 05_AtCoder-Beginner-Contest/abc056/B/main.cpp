#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long W, long long a, long long b){
    int ans = 0;
    if (a <= b) {
        if (a + W >= b) ans = 0;
        else ans = b - (a + W);
    } else {
        if (b + W >= a) ans = 0;
        else ans = a - (b + W);
    }
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long W;
    scanf("%lld",&W);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    solve(W, a, b);
    return 0;
}
