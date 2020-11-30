#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, long long S, long long T, long long W, std::vector<long long> A){
    int ans;
    if (W >= S && W <= T) ans = 1;
    else ans = 0;
    REP(i, N - 1) {
        W += A[i];
        if (W >= S && W <= T) ans++;
    }
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long S;
    scanf("%lld",&S);
    long long T;
    scanf("%lld",&T);
    long long W;
    scanf("%lld",&W);
    std::vector<long long> A(N-2+1);
    for(int i = 0 ; i < N-2+1 ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, S, T, W, std::move(A));
    return 0;
}
