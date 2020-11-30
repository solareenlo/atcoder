#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

void solve(long long N, std::vector<long long> W){
    int ans = 100100100;
    REP(i, N) {
        int sum1 = accumulate(W.begin(), W.begin() + i, 0);
        int sum2 = accumulate(W.begin() + i, W.end(), 0);
        chmin(ans, abs(sum1 - sum2));
    }
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> W(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&W[i]);
    }
    solve(N, std::move(W));
    return 0;
}
