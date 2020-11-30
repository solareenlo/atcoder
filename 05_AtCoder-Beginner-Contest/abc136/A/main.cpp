#include <algorithm>
#include <iostream>
using namespace std;

void solve(long long A, long long B, long long C){
    cout << max(C - (A - B), (long long)0) << '\n';
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
    solve(A, B, C);
    return 0;
}
