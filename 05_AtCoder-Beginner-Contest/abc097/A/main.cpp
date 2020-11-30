#include <iostream>
#include <cmath>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long a, long long b, long long c, long long d){
    if ((abs(a - b) <= d && abs(b - c) <= d) || abs(a - c) <= d) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long c;
    scanf("%lld",&c);
    long long d;
    scanf("%lld",&d);
    solve(a, b, c, d);
    return 0;
}
