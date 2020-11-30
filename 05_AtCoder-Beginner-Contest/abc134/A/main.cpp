#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long r){
    cout << 3 * pow(r, 2) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long r;
    scanf("%lld",&r);
    solve(r);
    return 0;
}
