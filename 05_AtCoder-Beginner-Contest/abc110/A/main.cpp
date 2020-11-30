#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long A, long long B, long long C){
    vector<int> n(3);
    n[0] = A;
    n[1] = B;
    n[2] = C;
    sort(n.begin(), n.end(), greater<int>());
    cout << n[0] * 10 + n[1] + n[2] << '\n';
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
    solve(A, B, C);
    return 0;
}
