#include <iostream>
#include <cmath>
using namespace std;

void solve(long long D, long long N){
    int start = pow(100, D);
    if (N == 100) cout << start * N + 1 * start << '\n';
    else cout << start * N << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long D;
    scanf("%lld",&D);
    long long N;
    scanf("%lld",&N);
    solve(D, N);
    return 0;
}
