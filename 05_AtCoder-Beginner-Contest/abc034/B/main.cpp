#include <iostream>
using namespace std;

void solve(long long n){
    if (n % 2) cout << n + 1 << '\n';
    else cout << n - 1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    solve(n);
    return 0;
}
