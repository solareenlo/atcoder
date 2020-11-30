#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long D, long long G, std::vector<long long> p, std::vector<long long> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long D;
    scanf("%lld",&D);
    long long G;
    scanf("%lld",&G);
    std::vector<long long> p(D);
    std::vector<long long> c(D);
    for(int i = 0 ; i < D ; i++){
        scanf("%lld",&p[i]);
        scanf("%lld",&c[i]);
    }
    solve(D, G, std::move(p), std::move(c));
    return 0;
}
