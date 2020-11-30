#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N){
    string s = to_string(N);
    if ((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]))
        cout << YES << '\n';
    else
        cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
