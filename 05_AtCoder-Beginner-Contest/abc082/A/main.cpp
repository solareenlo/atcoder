#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long a, long long b){
    if ((a + b) % 2) cout << (a + b) / 2 + 1 << '\n';
    else cout << (a + b) / 2 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    solve(a, b);
    return 0;
}
