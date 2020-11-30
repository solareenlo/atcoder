#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long n, std::vector<long long> p){
    int count = 0;
    REP(i, n - 2) {
        if ((p[i] < p[i+1] && p[i+1] < p[i+2]) || (p[i] > p[i+1] && p[i+1] > p[i+2]))
            count++;
    }
    cout << count << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    std::vector<long long> p(n);
    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&p[i]);
    }
    solve(n, std::move(p));
    return 0;
}
