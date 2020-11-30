#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

void solve(long long N, std::vector<long long> A){
    long long ans = -1;
    REP(i, N) REP(j, N)
        chmax(ans, abs(A[i] - A[j]));
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
