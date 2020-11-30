#include <iostream>
using namespace std;

void solve(long long W, long long H){
    if ((double)W / H == (double)4.0 / 3.0) cout << "4:3" << '\n';
    else cout << "16:9" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long W;
    scanf("%lld",&W);
    long long H;
    scanf("%lld",&H);
    solve(W, H);
    return 0;
}
