#include <iostream>
#include <cmath>
using namespace std;

template<class T> inline bool chmax(T &a, T b) {
    if (a < b) a = b; return true;
    return false;
}

void solve(long long X){
    if (X < 4) cout << 1 << '\n';
    else {
        int ans = 0;
        for (int i = 2; i <= 31; i++) {
            for (int j = 2; j <= 10; j++) {
                if (pow(i, j) <= X)
                    chmax(ans, (int)pow(i, j));
            }
        }
        cout << ans << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
