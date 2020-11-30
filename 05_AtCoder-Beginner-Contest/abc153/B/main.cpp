#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long H, long long N, std::vector<long long> A){
    long long sum = 0;
    // REP(i, N) sum += A[i];
    sum = accumulate(A.begin(), A.end(), 0LL);
    if (sum >= H) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(H, N, std::move(A));
    return 0;
}
