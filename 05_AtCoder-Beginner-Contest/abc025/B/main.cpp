#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long A, long long B, std::vector<std::string> s, std::vector<long long> d){
    long long ans = 0;
    REP(i, N) {
        long long m = 0;
        if (d[i] >= A && d[i] <= B) m = d[i];
        else if (d[i] < A) m = A;
        else m = B;
        if (s[i] == "West") m *= -1;
        ans += m;
    }
    if (ans == 0) cout << '0' << '\n';
    else if (ans > 0) cout << "East " << ans << '\n';
    else cout << "West " << ans * -1 << '\n';
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    std::vector<std::string> s(N);
    std::vector<long long> d(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> s[i];
        scanf("%lld",&d[i]);
    }
    solve(N, A, B, std::move(s), std::move(d));
    return 0;
}
