#include <iostream>
using namespace std;

void solve(long long N){
    if (N <= 59) cout << "Bad" << '\n';
    else if (N >= 60 && N <= 89) cout << "Good" << '\n';
    else if (N >= 90 && N <= 99) cout << "Great" << '\n';
    else cout << "Perfect" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
