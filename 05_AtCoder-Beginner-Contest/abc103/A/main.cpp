#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::vector<long long> A){
    sort(A.begin(), A.end());
    int ans = abs(A[0] - A[1]) + abs(A[1] - A[2]);
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<long long> A(3);
    for(int i = 0 ; i < 3 ; i++){
        scanf("%lld",&A[i]);
    }
    solve(std::move(A));
    return 0;
}
