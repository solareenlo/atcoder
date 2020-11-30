#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<long long> A){
    int sum = accumulate(A.begin(), A.end(), 0);
    double threshold = (double)sum / (4.0 * (double)M);
    int t;
    if (floor(threshold) == threshold) t = (int)threshold - 1;
    else t = (int)threshold;

    int count = 0;
    REP(i, N) if (t < A[i]) count++;

    if (count >= M) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, std::move(A));
    return 0;
}
