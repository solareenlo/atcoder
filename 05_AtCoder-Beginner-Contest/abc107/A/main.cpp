#include <iostream>
using namespace std;

void solve(long long N, long long i){
    cout << N - i + 1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long i;
    scanf("%lld",&i);
    solve(N, i);
    return 0;
}
