#include <iostream>
using namespace std;

void solve(long long D){
    if (D == 25) cout << "Christmas" << '\n';
    if (D == 24) cout << "Christmas Eve" << '\n';
    if (D == 23) cout << "Christmas Eve Eve" << '\n';
    if (D == 22) cout << "Christmas Eve Eve Eve" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long D;
    scanf("%lld",&D);
    solve(D);
    return 0;
}
