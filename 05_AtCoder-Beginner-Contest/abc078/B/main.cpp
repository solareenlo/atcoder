#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long X, long long Y, long long Z){
    cout << (X - Z) / (Y + Z) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    long long Z;
    scanf("%lld",&Z);
    solve(X, Y, Z);
    return 0;
}
