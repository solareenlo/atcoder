#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N){
    string s = to_string(N);
    int sum = 0;
    REP(i, s.size())
        sum += s[i] - '0';
    if (N % sum) cout << NO << '\n';
    else cout << YES << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
