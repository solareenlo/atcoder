#include <iostream>
using namespace std;

void solve(long long A, long long B){
    if (A <= 5) cout << 0 << '\n';
    else if (A >= 6 && A <= 12) cout << B / 2 << '\n';
    else cout << B << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
