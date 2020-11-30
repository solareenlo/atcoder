#include <iostream>
#include <algorithm>
using namespace std;

void solve(long long A, long long B, long long C){
    cout << min(B / A, C) << '\n';
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
