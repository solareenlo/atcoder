#include <algorithm>
#include <iostream>
using namespace std;

void solve(long long a, long long b){
    int ans;
    if (a <= b) ans = a;
    else ans = a - 1;
    cout << ans << '\n';
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
