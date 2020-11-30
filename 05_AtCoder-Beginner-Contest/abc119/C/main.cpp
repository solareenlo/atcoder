#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long A, long long B, long long C, std::vector<long long> l){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    std::vector<long long> l(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&l[i]);
    }
    solve(N, A, B, C, std::move(l));
    return 0;
}
