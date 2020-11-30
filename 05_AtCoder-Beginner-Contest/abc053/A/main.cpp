#include <iostream>
using namespace std;

void solve(long long x){
    if (x < 1200) cout << "ABC" << '\n';
    else cout << "ARC" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long x;
    scanf("%lld",&x);
    solve(x);
    return 0;
}
