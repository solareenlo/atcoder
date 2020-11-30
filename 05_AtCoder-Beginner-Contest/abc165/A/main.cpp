#include <iostream>
using namespace std;

void solve(long long K, long long A, long long B){
    bool ans = false;
    for (int i = A; i <= B; i++) {
        if (i % K == 0) ans = true;
    }
    if (ans) cout << "OK" << '\n';
    else cout << "NG" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(K, A, B);
    return 0;
}
