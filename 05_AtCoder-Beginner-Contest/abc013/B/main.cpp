#include <iostream>
#include <cmath>
using namespace std;

void solve(long long a, long long b){
    int diff = abs(a - b);
    if (diff > 5) cout << 10 - max(a, b) + min(a, b) << '\n';
    else cout << abs(a - b) << '\n';
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
