#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> L){
    sort(L.begin(), L.end());
    long long sum = 0;
    REP(i, N - 1) sum += L[i];
    if (sum > L[N - 1]) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> L(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&L[i]);
    }
    solve(N, std::move(L));
    return 0;
}
