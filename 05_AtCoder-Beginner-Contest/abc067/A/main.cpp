#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Possible";
const string NO = "Impossible";

void solve(long long A, long long B){
    if (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0)
        cout << YES << '\n';
    else
        cout << NO << '\n';
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
