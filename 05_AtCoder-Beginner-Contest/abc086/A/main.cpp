#include <iostream>
using namespace std;

void solve(long long a, long long b){
    if ((a * b) % 2) cout << "Odd" << '\n';
    else cout << "Even" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    solve(a, b);
    return 0;
}
