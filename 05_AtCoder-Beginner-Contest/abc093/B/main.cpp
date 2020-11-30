#include <iostream>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long A, long long B, long long K){
    set<long long> num;
    REP(i, K)
        if (A + i <= B)
            num.insert(A + i);
    REP(i, K)
        if (B - i >= A)
            num.insert(B - i);
    for (auto itr = num.begin(); itr != num.end(); itr++)
        cout << *itr << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long K;
    scanf("%lld",&K);
    solve(A, B, K);
    return 0;
}
