#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long L, std::vector<std::string> S){
    sort(S.begin(), S.end());
    REP(i, N)
        cout << S[i];
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    long long L;
    cin >> L;
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, L, std::move(S));
    return 0;
}
