#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<long long> a){
    sort(a.begin(), a.end(), greater<long long>());

    long long sumA = 0;
    long long sumB = 0;
    REP(i, a.size()) {
        if (i % 2) sumB += a[i];
        else sumA += a[i];
    }

    cout << sumA - sumB << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
