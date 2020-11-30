#include <iostream>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long A, long long B){
    int ans = 0;

    for (int i = A; i <= B; i++) {
        string str = to_string(i);
        string tmp = str;
        reverse(tmp.begin(), tmp.end());
        if (str == tmp)
            ans++;
    }

    cout << ans << '\n';
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
