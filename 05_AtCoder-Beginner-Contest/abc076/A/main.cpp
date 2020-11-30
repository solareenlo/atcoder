#include <iostream>
using namespace std;

void solve(long long R, long long G){
    cout << 2 * G - R << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long R;
    scanf("%lld",&R);
    long long G;
    scanf("%lld",&G);
    solve(R, G);
    return 0;
}
