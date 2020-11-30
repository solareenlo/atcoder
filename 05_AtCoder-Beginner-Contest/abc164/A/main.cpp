#include <iostream>
using namespace std;

void solve(long long S, long long W){
    if (W >= S) cout << "unsafe" << '\n';
    else cout << "safe" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long S;
    scanf("%lld",&S);
    long long W;
    scanf("%lld",&W);
    solve(S, W);
    return 0;
}
