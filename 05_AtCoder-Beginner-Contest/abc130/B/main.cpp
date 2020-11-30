#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long X, std::vector<long long> L){
    int count = 1;
    int tmp = 0;
    REP(i, N) {
        tmp += L[i];
        if (tmp <= X) count++;
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> L(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&L[i]);
    }
    solve(N, X, std::move(L));
    return 0;
}
