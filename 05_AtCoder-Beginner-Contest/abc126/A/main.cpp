#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, long long K, std::string S){
    REP(i, N) {
        if (i == K - 1) {
            char c = S[i] + 32;
            cout << c;
        }
        else cout << S[i];
    }
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    long long K;
    cin >> K;
    std::string S;
    std::cin >> S;
    solve(N, K, S);
    return 0;
}
