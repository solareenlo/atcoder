#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long A, long long B, long long C, long long D){
    int t = A;
    int a = C;
    while (true) {
        a -= B;
        if (a <= 0) break ;
        t -= D;
        if (t <= 0) break ;
    }
    if (a <= 0) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    long long D;
    scanf("%lld",&D);
    solve(A, B, C, D);
    return 0;
}
