#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, long long K, long long M, std::vector<long long> A){
    long long sum = N * M;
    REP(i, N - 1) sum -= A[i];
    if (sum <= 0) print(0);
    else if (sum <= K) print(sum);
    else print(-1);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, K, M, std::move(A));
    return 0;
}
