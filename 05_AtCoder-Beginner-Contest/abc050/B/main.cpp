#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<long long> T, long long M, std::vector<long long> P, std::vector<long long> X){
    REP(i, M) {
        long long ans = 0;
        REP(j, N) {
            if (j == P[i] - 1) ans += X[i];
            else ans += T[j];
        }
        cout << ans << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::vector<long long> T(N);
    REP(i, N) cin >> T[i];
    long long M;
    cin >> M;
    std::vector<long long> P(M);
    std::vector<long long> X(M);
    REP(i, M) cin >> P[i] >> X[i];
    solve(N, std::move(T), M, std::move(P), std::move(X));
    return 0;
}
