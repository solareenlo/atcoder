#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long X){
    int a = X / 500;
    int b = (X % 500) / 5;
    cout << a * 1000 + b * 5 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
