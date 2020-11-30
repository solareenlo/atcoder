#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long M, long long X, long long Y, std::vector<long long> x, std::vector<long long> y){
    sort(x.begin(), x.end(), greater<long long>());
    sort(y.begin(), y.end());
    if (x[0] >= y[0] || x[0] >= Y || y[0] <= X) cout << "War" << '\n';
    else cout << "No War" << '\n';
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
    long long Y;
    scanf("%lld",&Y);
    std::vector<long long> x(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
    }
    std::vector<long long> y(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&y[i]);
    }
    solve(N, M, X, Y, std::move(x), std::move(y));
    return 0;
}
