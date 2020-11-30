#include <iostream>
using namespace std;

void solve(long long K){
    if (K % 2) cout << (K / 2) * (K / 2 + 1) << '\n';
    else cout << (K / 2) * (K / 2) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    solve(K);
    return 0;
}
