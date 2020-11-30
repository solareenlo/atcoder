#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long Q, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> A(Q);
    std::vector<long long> B(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(Q, std::move(A), std::move(B));
    return 0;
}
