#include <iostream>
#include <algorithm>
using namespace std;

void solve(long long A, long long B, long long K){
    long long a, b;
    if (K >= A) a = 0;
    else a = A - K;
    if (K - A > 0) b = max(B - (K - A), (long long)0);
    else b = B;
    cout << a  << ' ' << b << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long K;
    scanf("%lld",&K);
    solve(A, B, K);
    return 0;
}
