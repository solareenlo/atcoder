#include <iostream>
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(long long X){
    if (X == 7 || X == 5 || X == 3) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
