#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> d){
    REP(i, N) {
        int ans = 0;
        int mini = 2001001001;
        REP(j, M) {
            int dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (mini > dist) ans = j + 1;
            chmin(mini, dist);
        }
        cout << ans << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    std::vector<long long> c(M);
    std::vector<long long> d(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&c[i]);
        scanf("%lld",&d[i]);
    }
    solve(N, M, std::move(a), std::move(b), std::move(c), std::move(d));
    return 0;
}
