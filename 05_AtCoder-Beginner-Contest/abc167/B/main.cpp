#include <iostream>
using namespace std;

void solve(long long A, long long B, long long C, long long K){
    if (K > A + B) cout << A - (K - A - B) << '\n';
    else if (K > A) cout << A << '\n';
    else cout << K << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    long long K;
    scanf("%lld",&K);
    solve(A, B, C, K);
    return 0;
}
