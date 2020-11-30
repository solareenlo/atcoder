#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long M, long long C, std::vector<long long> B, std::vector<std::vector<long long>> A){
    int count = 0;
    REP(i, N) {
        int sum = 0;
        REP(j, M)
            sum += B[j] * A[i][j];
        if (sum + C > 0) count++;
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long C;
    scanf("%lld",&C);
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&B[i]);
    }
    std::vector<std::vector<long long>> A(N, std::vector<long long>(M));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    solve(N, M, C, std::move(B), std::move(A));
    return 0;
}
