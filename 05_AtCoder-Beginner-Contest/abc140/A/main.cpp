#include <iostream>
#include <cmath>
using namespace std;

void solve(long long N){
    cout << pow(N, 3) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
