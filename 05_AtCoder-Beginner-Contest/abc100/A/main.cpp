#include <iostream>
using namespace std;

void solve(long long A, long long B){
    if (A <= 8 && B <= 8) cout << "Yay!" << '\n';
    else cout << ":(" << '\n';
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
