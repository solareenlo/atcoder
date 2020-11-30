#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long A){
    if (N % 500 <= A) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    solve(N, A);
    return 0;
}
