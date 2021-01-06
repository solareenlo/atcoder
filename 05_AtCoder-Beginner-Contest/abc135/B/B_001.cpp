#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(long long N, std::vector<long long> p){
    vector<long long> c(p.size());
    copy(p.begin(), p.end(), c.begin());
    sort(c.begin(), c.end());
    int count = 0;
    REP(i, N)
        if (p[i] != c[i]) count++;
    if (count == 2 || count == 0) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> p(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&p[i]);
    }
    solve(N, std::move(p));
    return 0;
}
