#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 1000000007;

void solve(long long n, std::vector<long long> a){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    std::vector<long long> a(n+1);
    for(int i = 0 ; i < n+1 ; i++){
        scanf("%lld",&a[i]);
    }
    solve(n, std::move(a));
    return 0;
}
