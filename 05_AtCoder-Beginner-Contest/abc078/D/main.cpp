#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long Z, long long W, std::vector<long long> a){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long Z;
    scanf("%lld",&Z);
    long long W;
    scanf("%lld",&W);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, Z, W, std::move(a));
    return 0;
}
