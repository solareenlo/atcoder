#include <iostream>
using namespace std;

void solve(long long H, long long W, long long h, long long w){
    cout << (H - h) * (W - w) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    long long h;
    scanf("%lld",&h);
    long long w;
    scanf("%lld",&w);
    solve(H, W, h, w);
    return 0;
}
