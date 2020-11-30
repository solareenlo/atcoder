#include <algorithm>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long A, long long B){
    if (A == 0) cout << 0 << '\n';
    else if (N <= A) cout << N << '\n';
    else if (N <= A + B) cout << A << '\n';
    else if (N % (A + B) == 0) cout << A * (N / (A + B)) << '\n';
    else if (N % (A + B) <= A) cout << A * (N / (A + B)) + (N % (A + B)) << '\n';
    else cout << A * (N / (A + B)) + A << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(N, A, B);
    return 0;
}
