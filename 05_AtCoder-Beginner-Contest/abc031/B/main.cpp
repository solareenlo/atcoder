#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long L, long long H, long long N, std::vector<long long> A){
    REP(i, N) {
        if (A[i] >= L && A[i] <= H) cout << 0 << '\n';
        else if (A[i] < L) cout << L - A[i] << '\n';
        else cout << -1 << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long L;
    scanf("%lld",&L);
    long long H;
    scanf("%lld",&H);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(L, H, N, std::move(A));
    return 0;
}
