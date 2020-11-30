#include <iostream>
using namespace std;

void solve(long long X, long long A){
    if (X < A) cout << 0 << '\n';
    else cout << 10 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long A;
    scanf("%lld",&A);
    solve(X, A);
    return 0;
}
