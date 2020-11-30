#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, long long T, std::vector<long long> A){
    long long ans = 0;
    REP(i, N) {
        if (i == N - 1) continue ;
        if (A[i + 1] - A[i] >= T) ans += T;
        else ans += A[i +1 ] - A[i];
    }
    ans += T;
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long T;
    scanf("%lld",&T);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, T, std::move(A));
    return 0;
}
