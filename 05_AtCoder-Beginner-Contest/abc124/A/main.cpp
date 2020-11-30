#include <iostream>
using namespace std;

void solve(long long A, long long B){
    if (A == B) cout << A * 2 << '\n';
    else if (A > B) {
        int ans = A;
        if (A - 1 >= B)
            ans += A - 1;
        else ans += B;
        cout << ans << '\n';
    } else {
        int ans = B;
        if (B - 1 >= A)
            ans += B - 1;
        else ans += A;
        cout << ans << '\n';
    }
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
