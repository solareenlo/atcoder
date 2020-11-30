#include <iostream>
using namespace std;

void solve(long long N, long long D){
    if (N >= 2 * D + 1) {
        if (N % (2 * D + 1))
            cout << (N / (2 * D + 1)) + 1<< '\n';
        else
            cout << (N / (2 * D + 1)) << '\n';
    } else
        cout << 1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    solve(N, D);
    return 0;
}
