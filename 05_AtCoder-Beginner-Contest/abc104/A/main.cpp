#include <iostream>
using namespace std;

void solve(long long R){
    if (R < 1200) cout << "ABC" << '\n';
    else if (R < 2800) cout << "ARC" << '\n';
    else cout << "AGC" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long R;
    scanf("%lld",&R);
    solve(R);
    return 0;
}
