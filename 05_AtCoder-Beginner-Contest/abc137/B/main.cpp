#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long K, long long X){
    int start = X - K + 1;
    int count = K * 2 - 1;
    for (int i = 0; i < count; i++) {
        cout << i + start;
        if (i != count - 1) cout << ' ';
        else cout << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    long long X;
    scanf("%lld",&X);
    solve(K, X);
    return 0;
}
