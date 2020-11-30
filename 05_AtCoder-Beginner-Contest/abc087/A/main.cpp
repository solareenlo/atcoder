#include <iostream>
using namespace std;

void solve(long long X, long long A, long long B){
    cout << (X - A) % B << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(X, A, B);
    return 0;
}
