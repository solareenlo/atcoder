#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long A, long long B, long long C, long long D){
    if (A + B > C + D) cout << "Left" << '\n';
    else if (A + B < C + D) cout << "Right" << '\n';
    else cout << "Balanced" << '\n';
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
