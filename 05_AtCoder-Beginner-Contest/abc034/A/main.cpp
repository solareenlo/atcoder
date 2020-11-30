#include <iostream>
using namespace std;

void solve(long long x, long long y){
    if (x > y) cout << "Worse" << '\n';
    else cout << "Better" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long x;
    scanf("%lld",&x);
    long long y;
    scanf("%lld",&y);
    solve(x, y);
    return 0;
}
