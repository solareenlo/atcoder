#include <iostream>
using namespace std;

void solve(long long X){
    string tmp = to_string(X);
    cout << tmp[0] - '0' + tmp[1] - '0' << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
