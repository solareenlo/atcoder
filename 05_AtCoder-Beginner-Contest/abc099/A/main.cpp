#include <iostream>
using namespace std;

void solve(long long N){
    if (N >= 1000) cout << "ABD" << '\n';
    else cout << "ABC" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
