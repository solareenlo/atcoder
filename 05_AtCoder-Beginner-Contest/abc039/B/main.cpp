#include <iostream>
#include <cmath>
using namespace std;

void solve(long long X){
    long long tmp = sqrt(X);
    cout << sqrt(tmp) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
