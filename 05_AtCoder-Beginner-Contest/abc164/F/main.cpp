#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> S, std::vector<long long> T, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&S[i]);
    }
    std::vector<long long> T(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&T[i]);
    }
    std::vector<long long> U(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&U[i]);
    }
    std::vector<long long> V(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&V[i]);
    }
    solve(N, std::move(S), std::move(T), std::move(U), std::move(V));
    return 0;
}
