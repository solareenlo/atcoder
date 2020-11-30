#include <iostream>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

void solve(long long N, long long L){
    int sum = 0;
    REP(i, N)
        sum += L + i;

    long long mini = 100100100;
    REP(i, N) {
        chmin(mini, abs(L));
        L++;
    }

    if (L <= 0) cout << sum + mini << '\n';
    else cout << sum - mini << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long L;
    scanf("%lld",&L);
    solve(N, L);
    return 0;
}
