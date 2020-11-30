#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long A, long long B, long long C, long long K){
    vector<int> num(3);
    num[0] = A;
    num[1] = B;
    num[2] = C;
    sort(num.begin(), num.end());
    REP(i, K) num[2] *= 2;
    cout << num[0] + num[1] + num[2] << '\n';
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
    long long K;
    scanf("%lld",&K);
    solve(A, B, C, K);
    return 0;
}
