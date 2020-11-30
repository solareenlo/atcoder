#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long A, long long B, long long C, long long X){
    int count = 0;
    REP(i, A + 1) REP(j, B + 1) REP(k, C + 1)
        if (i * 500 + j * 100 + k * 50 == X) count++;
    cout << count << '\n';
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
    long long X;
    scanf("%lld",&X);
    solve(A, B, C, X);
    return 0;
}
