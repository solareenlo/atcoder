#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long D, std::vector<std::vector<long long>> X){
    int count = 0;
    REP(i, N-1) {
        for (int j = i+1; j < N; j++) {
            double dist = 0.0;
            REP(k, D)
                dist += pow(abs(X[i][k] - X[j][k]), 2);
            dist = sqrt(dist);
            if (floor(dist) == dist) count++;
        }
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    std::vector<std::vector<long long>> X(N, std::vector<long long>(D));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < D ; j++){
            scanf("%lld",&X[i][j]);
        }
    }
    solve(N, D, std::move(X));
    return 0;
}
