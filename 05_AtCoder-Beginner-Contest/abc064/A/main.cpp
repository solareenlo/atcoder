#include <iostream>
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(long long r, long long g, long long b){
    if ((r * 100 + g * 10 + b) % 4) cout << NO << '\n';
    else cout << YES << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long r;
    scanf("%lld",&r);
    long long g;
    scanf("%lld",&g);
    long long b;
    scanf("%lld",&b);
    solve(r, g, b);
    return 0;
}
