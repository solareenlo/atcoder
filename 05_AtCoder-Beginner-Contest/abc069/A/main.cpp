#include <iostream>
using namespace std;

void solve(long long n, long long m){
    cout << (n - 1) * (m - 1) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    long long m;
    scanf("%lld",&m);
    solve(n, m);
    return 0;
}
