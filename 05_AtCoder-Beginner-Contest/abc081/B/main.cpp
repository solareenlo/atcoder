#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmin(T &a, T b) {
    if (a > b) a = b; return true;
    return false;
}

template<class T, class U> inline int divCount(T &num, U divisor) {
    int count = 0;
    while (num % divisor == 0) {
        num /= divisor;
        count++;
    }
    return count;
}

void solve(long long N, std::vector<long long> A){
    int ans = 1001001001;
    REP(i, N)
        chmin(ans, divCount(A[i], 2));
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
