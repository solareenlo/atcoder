#include <iostream>
using namespace std;

void solve(long long A, long long B){
    if (B == 1) cout << 0 << '\n';
    else if (A >= B) cout << 1 << '\n';
    else if ((B-A) % (A-1)) cout << (B-A) / (A-1) + 2 << '\n';
    else cout << (B-A) / (A-1) + 1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
