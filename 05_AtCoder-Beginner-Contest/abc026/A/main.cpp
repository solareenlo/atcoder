#include <iostream>
using namespace std;

void solve(long long A){
    long long mid = A / 2;
    if (A % 2) cout << mid * (mid + 1) << '\n';
    else cout << mid * mid << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    solve(A);
    return 0;
}
