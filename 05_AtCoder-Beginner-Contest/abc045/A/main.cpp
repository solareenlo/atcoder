#include <iostream>
using namespace std;

void solve(long long a, long long b, long long h){
    cout << (a + b) * h / 2 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long h;
    scanf("%lld",&h);
    solve(a, b, h);
    return 0;
}
