#include <iostream>
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(long long a, long long b, long long c){
    if (b - a == c - b) cout << YES << '\n';
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
    solve(a, b, c);
    return 0;
}
