#include <iostream>
using namespace std;

const string NO = "IMPOSSIBLE";

void solve(long long A, long long B){
    if ((A + B) % 2) cout << NO << '\n';
    else cout << (A + B) / 2 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
