#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 2;

void solve(long long p, std::vector<long long> a){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long p;
    scanf("%lld",&p);
    std::vector<long long> a(p-1-0+1);
    for(int i = 0 ; i < p-1-0+1 ; i++){
        scanf("%lld",&a[i]);
    }
    solve(p, std::move(a));
    return 0;
}
