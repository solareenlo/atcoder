#include <iostream>
using namespace std;

void solve(long long A, long long B){
    if (B % A) cout << B - A << '\n';
    else cout << A + B << '\n';
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
