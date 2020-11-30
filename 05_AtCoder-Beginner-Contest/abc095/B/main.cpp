#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long X, std::vector<long long> m){
    REP(i, N) X -= m[i];
    sort(m.begin(), m.end());
    cout << (X / m[0]) + N << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> m(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&m[i]);
    }
    solve(N, X, std::move(m));
    return 0;
}
