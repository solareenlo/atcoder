#include <iostream>
using namespace std;

void solve(long long A, long long B, long long T){
    cout << (T / A) * B << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long T;
    scanf("%lld",&T);
    solve(A, B, T);
    return 0;
}
