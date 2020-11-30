#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

void solve(long long N, long long T, std::vector<long long> c, std::vector<long long> t){
    long long ans = 1001;
    REP(i, N) {
        long long tmp;
        if (T >= t[i]) tmp = c[i];
        chmin(ans, tmp);
    }
    if (ans == 1001) cout << "TLE" << '\n';
    else cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long T;
    scanf("%lld",&T);
    std::vector<long long> c(N);
    std::vector<long long> t(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&c[i]);
        scanf("%lld",&t[i]);
    }
    solve(N, T, std::move(c), std::move(t));
    return 0;
}
