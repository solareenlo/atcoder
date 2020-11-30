#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N){
    bool ans = false;
    REP(i, 26) REP(j, 16)
        if (4 * i + 7 * j == N) ans = true;
    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
