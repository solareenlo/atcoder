#include <iostream>
using namespace std;

void solve(long long X, long long Y){
    cout << X + Y / 2 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    solve(X, Y);
    return 0;
}
