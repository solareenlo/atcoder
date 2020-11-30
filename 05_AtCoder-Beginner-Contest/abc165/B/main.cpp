#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long X){
    long long n = 100;
    int count = 0;
    for (int i = 1; i < 4000; i++) {
        n *= 1.01;
        count++;
        if (n >= X) break ;
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
