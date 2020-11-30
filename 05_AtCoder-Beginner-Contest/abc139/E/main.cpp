#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<std::vector<long long>> A){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N-1));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N-1 ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    solve(N, std::move(A));
    return 0;
}
