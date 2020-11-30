#include <iostream>
using namespace std;

long long comb(long long n, long long r) {
    if (r * 2 > n) r = n - r;
    long long dividend = 1;
    long long divisor = 1;
    for (long long i = 1; i <= r; i++ ) {
        dividend *= (n - i + 1);
        divisor *= i;
    }
    return dividend / divisor;
}

void solve(long long N, long long M){
    long long n , m;
    if (N <= 1) n = 0;
    else n = comb(N, 2);
    if (M <= 1) m = 0;
    else m = comb(M, 2);
    cout << n + m << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    solve(N, M);
    return 0;
}
