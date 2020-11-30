#include <iostream>
using namespace std;

void solve(long long X, long long Y, long long Z){
    cout << Z << ' ' << X << ' ' << Y << '\n';
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
