#include <iostream>
using namespace std;

void solve(long long A, long long B){
    if (A == B) cout << "Draw" << '\n';
    else if (A == 1) cout << "Alice" << '\n';
    else if (B == 1) cout << "Bob" << '\n';
    else if (A < B) cout << "Bob" << '\n';
    else cout << "Alice" << '\n';
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
