#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(long long N, long long x, std::vector<long long> a){
    sort(a.begin(), a.end());
    int ans = 0;
    if (a[0] > x)
        ans = 0;
    else {
        while (x > 0) {
            x -= a[ans];
            if (x >= 0)
                ans++;
            if (ans == N && x > 0) {
                ans--;
                break ;
            }
        }
    }

    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long x;
    scanf("%lld",&x);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, x, std::move(a));
    return 0;
}
