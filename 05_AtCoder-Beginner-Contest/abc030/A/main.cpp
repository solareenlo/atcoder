#include <iostream>
using namespace std;

void solve(long long A, long long B, long long C, long long D){
    if ((double)A / (double)B == (double)C / (double)D) cout << "DRAW" << '\n';
    else if ((double)A / (double)B > (double)C / (double)D) cout << "AOKI" << '\n';
    else cout << "TAKAHASHI" << '\n';
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
    long long D;
    scanf("%lld",&D);
    solve(A, B, C, D);
    return 0;
}
