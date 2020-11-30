#include <iostream>
using namespace std;

void solve(long long T, long long X){
    printf("%.3f\n", (double)T / (double)X);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long T;
    scanf("%lld",&T);
    long long X;
    scanf("%lld",&X);
    solve(T, X);
    return 0;
}
