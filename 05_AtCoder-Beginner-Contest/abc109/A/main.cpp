#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long A, long long B){
    if ((A * B) % 2) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
