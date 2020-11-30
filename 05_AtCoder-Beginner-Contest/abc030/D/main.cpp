#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long a, std::string k, std::vector<long long> b){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long a;
    scanf("%lld",&a);
    std::string k;
    std::cin >> k;
    std::vector<long long> b(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&b[i]);
    }
    solve(N, a, k, std::move(b));
    return 0;
}
