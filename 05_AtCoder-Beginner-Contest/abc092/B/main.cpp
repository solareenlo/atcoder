#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long D, long long X, std::vector<long long> A){
    int ans = 0;
    REP(i, N) {
        int count = 0;
        while (true) {
            if (A[i] * count + 1 <= D) count++;
            else break ;
        }
        ans += count;
    }
    cout << ans + X << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, D, X, std::move(A));
    return 0;
}
