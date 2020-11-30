#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> s){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> s(N-1-0+1);
    for(int i = 0 ; i < N-1-0+1 ; i++){
        scanf("%lld",&s[i]);
    }
    solve(N, std::move(s));
    return 0;
}
