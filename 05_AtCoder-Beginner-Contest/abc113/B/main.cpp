#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

void solve(long long N, long long T, long long A, std::vector<long long> H){
    int ans = 0;
    double mini = 100100100.0;
    REP(i, N) {
        double tmp = abs(A - (T - H[i] * 0.006));
        if (tmp < mini) {
            ans = i + 1;
            chmin(mini, tmp);
        }
    }
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long T;
    scanf("%lld",&T);
    long long A;
    scanf("%lld",&A);
    std::vector<long long> H(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&H[i]);
    }
    solve(N, T, A, std::move(H));
    return 0;
}
