#include <iostream>
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(long long A, long long B, long long X){
    if (X - A < 0) cout << NO << '\n';
    else if (X - A <= B) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long X;
    scanf("%lld",&X);
    solve(A, B, X);
    return 0;
}
