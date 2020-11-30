#include <iostream>
using namespace std;

void solve(long long H, long long A){
    if (H % A) cout << H / A + 1 << '\n';
    else cout << H / A << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long A;
    scanf("%lld",&A);
    solve(H, A);
    return 0;
}
