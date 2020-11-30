#include <iostream>
using namespace std;

void solve(long long N){
    if (N < 10) cout << N << '\n';
    else if (N < 100) cout << 9 << '\n';
    else if (N < 1000) cout << 9 + N - 100 + 1 << '\n';
    else if (N < 10000) cout << 9 + 900 << '\n';
    else if (N < 100000) cout << 9 + 900 + N - 10000 + 1 << '\n';
    else if (N < 1000000) cout << 9 + 900 + 90000 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
