#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<long long> l, std::vector<long long> r){
    int sum = 0;
    REP(i, N)
        sum += r[i] - l[i] + 1;
    cout << sum << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> l(N);
    std::vector<long long> r(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
    }
    solve(N, std::move(l), std::move(r));
    return 0;
}
