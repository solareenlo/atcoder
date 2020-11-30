#include <iostream>
using namespace std;

void solve(long long A, long long D){
    if (A > D) cout << A * (D + 1) << '\n';
    else cout << (A + 1) * D << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long D;
    scanf("%lld",&D);
    solve(A, D);
    return 0;
}
