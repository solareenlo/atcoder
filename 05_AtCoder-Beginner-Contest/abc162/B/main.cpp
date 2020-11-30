#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N){
    long long sum = 0;
    REP(i, N + 1)
        if (i % 15 && i % 5 && i % 3) sum += i;
    cout << sum << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
