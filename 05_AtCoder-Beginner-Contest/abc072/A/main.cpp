#include <iostream>
using namespace std;

void solve(long long X, long long t){
    if (t > X) cout << 0 << '\n';
    else cout << X - t << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long t;
    scanf("%lld",&t);
    solve(X, t);
    return 0;
}
