#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<long long> L, std::vector<long long> R, std::vector<long long> D){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> L(M);
    std::vector<long long> R(M);
    std::vector<long long> D(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, M, std::move(L), std::move(R), std::move(D));
    return 0;
}
