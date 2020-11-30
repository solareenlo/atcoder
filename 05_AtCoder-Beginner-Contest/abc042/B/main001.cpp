#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (long long i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    // ios::sync_with_stdio(false);

    long long N;
    scanf("%lld",&N);

    long long L;
    scanf("%lld",&L);

    std::vector<std::string> S(N);
    REP(i, N)
        std::cin >> S[i];

    sort(S.begin(), S.end());

    REP(i, N)
        cout << S[i];
    cout << '\n';
    return 0;
}
