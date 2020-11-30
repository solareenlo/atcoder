#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long n, long long x){
    if (n / 2 >= x) cout << x - 1 << '\n';
    else cout << n - x << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    long long x;
    scanf("%lld",&x);
    solve(n, x);
    return 0;
}
