#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<long long> a){
    int ans = 0;
    long long sum = accumulate(a.begin(), a.end(), 0);
    if (sum % N) ans = -1;
    else {
        long long ave = sum / N;
        REP(i, N) {
            if (i == 0) continue ;
            long long s = accumulate(a.begin(), a.begin() + i, 0LL);
            if (s != ave * i) ans++;
        }
    }
    cout << ans << '\n';
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
