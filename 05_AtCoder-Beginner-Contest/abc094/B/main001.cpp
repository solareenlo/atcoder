#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long M, long long X, std::vector<long long> A){
    map<int, int> m;
    REP(i, N + 1)
        m.insert(make_pair(i, 0));
    REP(i, M)
        m[A[i]] = 1;

    long long ans1 = 0;
    REP(i, X)
        ans1 += m[i];

    long long ans2 = 0;
    for (int i = X; i < N; i++)
        ans2 += m[i];

    cout << min(ans1, ans2) << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> A(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, X, std::move(A));
    return 0;
}
