#include <iostream>
using namespace std;

void solve(long long A, long long P){
    cout << (3 * A + P) / 2 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long P;
    scanf("%lld",&P);
    solve(A, P);
    return 0;
}
