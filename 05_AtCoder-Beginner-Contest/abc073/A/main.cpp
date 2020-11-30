#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N){
    string tmp = to_string(N);
    if (tmp[0] == '9' || tmp[1] == '9') cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
