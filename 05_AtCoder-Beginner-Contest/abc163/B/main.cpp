#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long M, std::vector<long long> A){
    long long sum = accumulate(A.begin(), A.end(), 0);
    if (sum <= N) cout << N - sum << '\n';
    else cout << -1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, std::move(A));
    return 0;
}
